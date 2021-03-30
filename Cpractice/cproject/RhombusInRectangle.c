#include <stdio.h>

int main() {
    int n;
    int index = 0;
    scanf("%d", &n);
    for(int i = 0; i < n * 2 - 1; i++) {
        if(i < n) {
        for(int j = 0; j < n * 2; j++) {
            if(j > n - i - 1 && j < n + i) {
                printf("~");
                continue;
            }
            else
                printf("*");
        }
        printf("\n");
        continue;
        }
        if(i >= n) {
                for(int j = 0; j < 2 * n; j++) {
                    if(j > 1 + index && j < 2 * n - 2 - index) {
                        printf("~");
                        continue;
                    }
                    else {
                    printf("*");
                    }
                }
                printf("\n");
            }
            index++;
        }
    }