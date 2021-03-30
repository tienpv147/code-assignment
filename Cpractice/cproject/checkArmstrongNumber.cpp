#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;
    int digits = 0;
    cin >> num;
    originalNum = num;
    while (originalNum != 0) {
        digits++;  
        originalNum /= 10;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        
        result += pow(remainder, digits);
        
        originalNum /= 10;
    }

    if (result == num)
        cout <<"1";
    else
        cout <<"0";

    return 0;
}