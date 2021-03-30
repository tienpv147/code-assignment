#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char *str = (char*) malloc(100 * sizeof(char));
    fgets(str, 100, stdin);
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] != ' ') {
            str[i] = toupper(str[i]);
        }
    }
    fputs(str, stdout);
}