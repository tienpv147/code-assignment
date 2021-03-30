#include <stdio.h>
#include <stdbool.h>

void sortArr(int arr[], int arrLength) {

    for(int i = 0; i < arrLength; i++) {
        for(int j = 0; j < arrLength - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }    
}    

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int oddArr[n];
    int oddInx = 0;
    int evenArr[n];
    int evenInx = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenArr[evenInx++] = arr[i];
        }
        else
            oddArr[oddInx++] = arr[i];
    }
    sortArr(oddArr, oddInx);
    sortArr(evenArr, evenInx);
    for(int i = 0; i < evenInx; i++) {
        printf("%d ", evenArr[i]);
    }
    for(int i = 0; i < oddInx; i++) {
        printf("%d ", oddArr[i]);
    }
}