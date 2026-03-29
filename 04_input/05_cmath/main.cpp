#include <iostream>
#include <cmath>

using namespace std;


int main() {
    // --- 1. Basic Power & Roots ---
    
    // pow(base, exponent)
    // Raises a number to the power of another
    double base = 2.0;
    double expVal = 3.0;
    double powResult = std::pow(base, expVal); // 2^3
    std::cout << powResult << " Power (2^3)" << std::endl;

    // sqrt(x)
    // Returns the square root of a number
    double sqrtNum = 16.0;
    double sqrtResult = std::sqrt(sqrtNum);
    std::cout << sqrtResult << " Square Root of 16" << std::endl;

    // cbrt(x)
    // Returns the cube root (3rd root) of a number
    double cbrtNum = 27.0;
    double cbrtResult = std::cbrt(cbrtNum);
    std::cout << cbrtResult << " Cube Root of 27" << std::endl;

    // hypot(x, y)
    // Calculates the hypotenuse of a right-angled triangle: sqrt(x*x + y*y)
    double sideA = 3.0;
    double sideB = 4.0;
    double hypotResult = std::hypot(sideA, sideB);
    std::cout << hypotResult << " Hypotenuse of triangle (3, 4)" << std::endl;


    // --- 2. Rounding Functions ---

    double roundNum = 4.6;

    // ceil(x)
    // Rounds x UP to the nearest integer (Ceiling)
    std::cout << std::ceil(roundNum) << " Ceil (4.6 -> 5)" << std::endl;

    // floor(x)
    // Rounds x DOWN to the nearest integer (Floor)
    std::cout << std::floor(roundNum) << " Floor (4.6 -> 4)" << std::endl;

    // round(x)
    // Rounds to the nearest integer (.5 rounds away from zero)
    std::cout << std::round(roundNum) << " Round (4.6 -> 5)" << std::endl;

    // trunc(x)
    // Truncates the number (simply removes all decimals)
    std::cout << std::trunc(roundNum) << " Truncate (4.6 -> 4)" << std::endl;


    // --- 3. Exponential & Logarithm ---

    // exp(x)
    // Returns the value of Euler's number 'e' raised to the power of x (e^x)
    double expX = 1.0;
    std::cout << std::exp(expX) << " Exponential e^1" << std::endl;

    // log(x)
    // Returns the natural logarithm (base e)
    double logNum = 2.71828;
    std::cout << std::log(logNum) << " Natural Logarithm (log e)" << std::endl;

    // log10(x)
    // Returns the common logarithm (base 10)
    double log10Num = 100.0;
    std::cout << std::log10(log10Num) << " Logarithm Base 10 of 100" << std::endl;


    // --- 4. Trigonometry (Angles must be in Radians) ---

    // Note: To convert degrees to radians: (degrees * M_PI / 180)
    double angle = 0.5; // approximately 28.6 degrees

    // sin, cos, tan
    std::cout << std::sin(angle) << " Sine" << std::endl;    // ger: Sinus
    std::cout << std::cos(angle) << " Cosine" << std::endl;  // ger: Cosinus
    std::cout << std::tan(angle) << " Tangent" << std::endl; // ger: Tangens


    // --- 5. Absolute Value & Comparison ---

    // fabs(x)
    // Returns the absolute value of a floating-point number (removes the negative sign)
    double negNum = -15.5;
    std::cout << std::fabs(negNum) << " Absolute Value of -15.5" << std::endl;

    // fmod(x, y)
    // Returns the remainder of a division for floating-point numbers
    double fmodNum1 = 5.5;
    double fmodNum2 = 2.0;
    std::cout << std::fmod(fmodNum1, fmodNum2) << " Floating-point Remainder (5.5 / 2.0)" << std::endl;

    // fmax(x, y) and fmin(x, y)
    // Returns the larger or smaller of two values
    std::cout << std::fmax(10.2, 5.8) << " Fmax (higher value)" << std::endl;
    std::cout << std::fmin(10.2, 5.8) << " Fmin (lower value)" << std::endl;

    return 0;
}


// for reference you can look at sites ike https://www.w3schools.com/cpp/cpp_ref_math.asp To gain more informations
// note: i think i got depressed after reading all this (i hate maths).. but to this time im doing cpp for around Date: Fri, 13 Mar 2026 13:54:04 +0100 until today 22.03
// i think i like cpp its a nice language i thought actually its harder because i have some big trouble learning js..
// i think im going to main this language for a time and get good at it because i like the thinks you can build with it
// im going to do some libs and this staff and also hardware programming with some tricks on a small micro controller to build a own calculator
// (im think i just take my school calc and rebuild it with some ehem.. i would describe it as more variable saving options...)
// to be honest some thinks here i didnt had at school at this moment so i used ai for this code because i dont know how it works.