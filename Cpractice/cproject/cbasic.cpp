#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
    {
        /* data */
        int x;
        int y;
    } point;

void birthday(point *p);
void birthday(point *p) {
    p->x++;
}
int main() {
    printf("Hello mah friend");
    char * name = "John Pham";
    strlen(name);
    point p;
    p.x = 1;
    p.y = 2;
    birthday(&p);
    printf("\n%d", p.x);
    point *object = (point*) malloc(sizeof(object));
    free(object);
    return 0;
}

