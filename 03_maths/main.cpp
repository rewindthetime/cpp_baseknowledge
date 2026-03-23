#include <iostream>

int main() {
    // 1 Addition
    int addNum1 = 10;
    int addNum2 = 5;
    int addResult = addNum1 + addNum2;
    std::cout << addResult << " Addition" << std::endl;

    // 2 Subtraction
    int subNum1 = 10;
    int subNum2 = 4;
    int subResult = subNum1 - subNum2;
    std::cout << subResult << " Subtraction" << std::endl;
    
    // 3 Multiplication
    int mulNum1 = 6;
    int mulNum2 = 3;
    int mulResult = mulNum1 * mulNum2;
    std::cout << mulResult << " Multiplication" << std::endl;

    // 4 Division
    int divNum1 = 12;
    int divNum2 = 4;
    int divResult = divNum1 / divNum2;
    std::cout << divResult << " Division" << std::endl;

    // 4.a Division
    // How to get a decimal (floating-point) result:
    // At least one of the operands must be a double (or float)
    double adivNum1 = 10;
    int adivNum2 = 3;
    double adivResult = adivNum1 / adivNum2;
    std::cout << adivResult << " Division (decimal numbers)" << std::endl;

    // 4.b Modulo
    // How to get a remainder of a division
    // The % operator gives the remainder after dividing two integers
    int modNum1 = 10;  
    int modNum2 = 3; 
    int modResult = modNum1 % modNum2;
    std::cout << modResult << " Modulo (remainder of 10 / 3)" << std::endl;

    // 5 Simplification (if you want it more simple you can also do this)
    int simpleNum = 10;
    simpleNum = simpleNum + 5;
    std::cout << simpleNum << " more simple method" << std::endl;

    // 6 Increment Operators
    // 6.a Post-Increment
    // Post-increment uses the current value first, then increases it by 1
    int postIncrNum1 = 10;
    int postIncrNum2 = postIncrNum1++;
    std::cout << postIncrNum2 << " Post-Increment (postIncrNum2 = postIncrNum1++)" << std::endl;
    std::cout << postIncrNum1 << " postIncrNum1 after post-increment" << std::endl;

    // 6.b Pre-Increment
    // Pre-increment increases the value first, then uses it
    int preIncrNum1 = 20;
    int preIncrNum2 = ++preIncrNum1;
    std::cout << preIncrNum2 << " Pre-Increment (preIncrNum2 = ++preIncrNum1)" << std::endl;
    std::cout << preIncrNum1 << " preIncrNum1 after pre-increment" << std::endl;


}

// Note:

// you can also just type in numbers like int divResult 6 / 3;
// i used variables because in a real programm you dont use hardcoded numbers!