#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int index = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int j = 1; j < n; j++) {  
        int key = arr[j];  
        int i = j - 1;  
        while ((i > -1) && (arr[i] > key)) {  
            arr[i+1] = arr[i];  
            i--;  
        }  
        arr[i+1] = key;
        for(int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }  
        printf("\n");
    }

}