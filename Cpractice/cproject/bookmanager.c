#include <stdio.h>
#include <stdlib.h>

int main() {
    typedef struct {
        int id;
        int name;
        int author;
        int price;
    } Book;
    Book book;
    FILE *bookptr = fopen("b19dccn582-bookinfo.bin", "w+");
    int function, exe, addbooks;
    char *newbook = (char*) malloc(100 * sizeof(char));

    scanf("%d\n", &function);
    scanf("%d\n", &exe);

    if(function == 1) {
        scanf("%d\n", &addbooks);
        printf("%d", addbooks);
    }
    else if(function == 2) {
        scanf("%[\n]\n", newbook);
        printf("%s", newbook);
        
    }
    
}