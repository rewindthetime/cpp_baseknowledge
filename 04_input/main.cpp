#include <iostream>
using namespace std;

int main() {
    int firstNumber;
    int secondNumber;
    int result;

    cout << "\n++++ CPP ADDITION CALCULATOR ++++\n" << endl;

    cout << "Please Enter a First number ";
    cin  >> firstNumber;

    cout << "Please Enter a Second number ";
    cin >> secondNumber;

    result = firstNumber + secondNumber;
    cout << result << endl;

    return 0;
}