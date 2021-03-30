#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
    char *str = (char*) malloc(100 * sizeof(char));
    scanf("%[^\n]", str);
    char **wordArr = (char**) malloc(100 * sizeof(char*));
    int index = 0;
    int duplicatedInx[100];
    int index2 = 0;
    char *token = strtok(str, " ");
    while(token != NULL) {                                          
        wordArr[index++] = token;
        token = strtok(NULL, " ");
    }
    for(int i = 0; i < index; i++) {
        bool isDuplicate = false;
        for(int k = 0; k < index2; k++) {
            if(i == duplicatedInx[k]) {
                isDuplicate = true;
                break;
            }
        }
        if(isDuplicate)
        continue;

        for(int j = 0; j < index; j++) {
            if(j != i && strcmp(wordArr[i], wordArr[j]) == 0) {
                duplicatedInx[index2++] = j;
            }
        }
        printf("%s ", wordArr[i]);
    }
}