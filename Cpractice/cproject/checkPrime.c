#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(long long a) {
    bool ifPrime = true;
    if(a < 2) {
        return false;
    }
    for(int i = 2; i <= sqrt(a); i++) {
        if(a % i == 0) {
            ifPrime = false;
            break;
        }
    }
    return ifPrime;
}

bool checkSum(int a) {
    int sumDigits = 0;
        int temp = a;
        while(temp != 0) {
            sumDigits += temp % 10;
            temp /= 10;
        }
    return isPrime(sumDigits);
}

bool checkDigits(int a) {
    int temp = a;
    bool checkPrime = true;
        while(temp != 0) {
            if(!isPrime(temp % 10)) {
                checkPrime = false;
                break;
            }
            temp /= 10;
        }
    return checkPrime;    
}

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    int count = 0;
    if(a > b) { 
    for(long long i = b; i <= a; i++) {
        if (isPrime(i) && checkDigits(i) && checkSum(i))
        count++;
        }
    }
    if(b > a) {
        for(long long i = a; i <= b; i++) {
        if (isPrime(i) && checkDigits(i) && checkSum(i))
        count++;
        }
    }
    printf("%d", count);
}
