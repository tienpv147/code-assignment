#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int temp = n;
    int arr[10] = {0};
    while(n != 0) {
        int digit = n % 10;
        arr[digit] += 1;
        n /= 10;
    }
    for(int i = 0; i < 10; i++) {
        if(arr[i] != 0) {
            printf("%d %d\n", i, arr[i]);
        }
    }
}