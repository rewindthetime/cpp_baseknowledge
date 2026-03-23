#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int age;

    cout << "enter your age: ";
    cin >> age;

    switch(age) {
    case 1:
        cout << "damn smart baby";
        break;
    case 2:
        cout << "woww you can walk??";
        break;
    default:
        cout << "no case match \n";
    }

    return 0;
}