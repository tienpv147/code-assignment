#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int dupInx[n];
    int index = 0;
    for(int i = 0; i < n; i++) {
        bool isDup = false;
        for(int j = 0; j < index; j++) {
            if(dupInx[j] == i) {
                isDup = true;
                break;
            }
        }
        if(isDup)
        continue;
        bool willBePrinted = true;
        for(int k = 0; k < n; k++) {
            if(k != i && arr[k] == arr[i]) {
                dupInx[index++] = k;
                willBePrinted = false;
            }
        }
        if(willBePrinted) 
        printf("%d ", arr[i]);
    }
}