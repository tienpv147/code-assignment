#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

int isprime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
}

void sort(int *arr, int arrlength)
{
    for (int i = 0; i < arrlength; i++)
    {
        for (int j = 0; j < arrlength - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                int temp;
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int *primes = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (isprime(arr[i][j]))
            {
                count++;
            }
        }
        primes[i] = count;
    }
    sort(primes, n);
    for(int i = 0; i < n; i++) {
        printf("%d ", primes[i]);
    }
    free(primes);
}