#include <iostream>

using namespace std;

int add(int a, int b) { 
    // so to create a function just make it like 
    // int main()
    return a + b;
}

int main() {
    int sum = add(5, 3);
    cout << "Sum is: " << sum << endl;

    return 0;
}