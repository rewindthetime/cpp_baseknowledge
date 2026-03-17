#include <iostream>

int main() {

    // Initialize a variable
    int file_size = 100;
    int counter = 0;


    // swap variables
    int a = 1, b = 2;
    std::swap(a, b);
    std::cout << a << " " << b << std::endl;


    // Declare a variable with decimal numbers
    double sales = 9.99;


    // const (You cannot change the number of the variable)
    const double price = 67.67;
    // Since this variable is const, its value cannot be changed


    // printing everything out
    std::cout << file_size << std::endl;
    std::cout << counter << std::endl;
    std::cout << sales << std::endl;
    return 0;
}