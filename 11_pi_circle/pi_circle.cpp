#include <SFML/Graphics.hpp>
#include <cmath>
#include <optional>
#include <vector>

int main() {
    sf::RenderWindow window(sf::VideoMode({1920, 1080}), "Pi Arm Drawing");
    window.setFramerateLimit(150);

    const float PI = 3.14159265358979323846f;
    const sf::Vector2f origin(960.f, 540.f);

    const float r1 = 160.f;
    const float r2 = 160.f;
    const float gap = 20.f;

    float theta = 0.f;
    const float step = 0.0015f;
    const int substeps = 12;

    std::vector<sf::Vertex> path;

    sf::Vector2f p1 = origin;
    sf::Vector2f p2 = origin;

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        for (int i = 0; i < substeps; ++i) {
            p1 = {
                origin.x + r1 * std::cos(theta),
                origin.y + r1 * std::sin(theta)
            };

            p2 = {
                p1.x + r2 * std::cos(PI * theta),
                p1.y + r2 * std::sin(PI * theta)
            };

            sf::Vector2f dir = p2 - p1;
            float len = std::sqrt(dir.x * dir.x + dir.y * dir.y);

            if (len > 0.0001f) {
                dir /= len;

                sf::Vector2f normal = { -dir.y, dir.x };

                sf::Vector2f drawPoint = p2 + normal * gap;

                path.push_back(sf::Vertex{drawPoint, sf::Color::White});
            }

            theta += step;
        }

        window.clear(sf::Color::Black);

        {
            sf::Vertex arm1[] = {
                sf::Vertex{origin, sf::Color(200, 200, 200)},
                sf::Vertex{p1, sf::Color(200, 200, 200)}
            };
            window.draw(arm1, 2, sf::PrimitiveType::Lines);
        }

        {
            sf::Vertex arm2[] = {
                sf::Vertex{p1, sf::Color(200, 200, 200)},
                sf::Vertex{p2, sf::Color(200, 200, 200)}
            };
            window.draw(arm2, 2, sf::PrimitiveType::Lines);
        }

        if (path.size() > 1) {
            window.draw(path.data(), path.size(), sf::PrimitiveType::LineStrip);
        }

        auto dot = [&](sf::Vector2f pos) {
            sf::CircleShape d(4.f);
            d.setFillColor(sf::Color::White);
            d.setPosition(pos - sf::Vector2f(4.f, 4.f));
            window.draw(d);
        };

        dot(origin);
        dot(p1);
        dot(p2);

        window.display();
    }

    return 0;
}