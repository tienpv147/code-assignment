#include <stdio.h>
#include <math.h>

int isFibonacciNumber(int a)
{
    double a1 = 5 * pow(a, 2) + 4;
    double a2 = 5 * pow(a, 2) - 4;
    long a1_sqrt = (long)(sqrt(a1));
    long a2_sqrt = (long)(sqrt(a2));
    return (a1_sqrt * a1_sqrt == a1 || a2_sqrt * a2_sqrt == a2);
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", isFibonacciNumber(a));
}