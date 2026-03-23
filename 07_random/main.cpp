#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    long elapsdSeconds = time(0); // Jan 1 1970

    srand(elapsdSeconds);
    int number = rand() % 10; // 0-9
    
    cout << number;

    return 0;
}

    

