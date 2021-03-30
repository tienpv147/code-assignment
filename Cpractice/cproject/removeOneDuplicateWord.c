#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char *str = (char*) malloc(100 * sizeof(char));
    char *removeWord = (char*) malloc(100 * sizeof(char));
    fgets(str, 100, stdin);
    fgets(removeWord, 100, stdin);
    char *remove = strtok(removeWord, "\n");
    char *token = strtok(str, " ");
    while(token != NULL) {
        if(strcmp(token, remove) != 0) {
        printf("%s ", token);
        }
        token = strtok(NULL, " ");
    }
}

