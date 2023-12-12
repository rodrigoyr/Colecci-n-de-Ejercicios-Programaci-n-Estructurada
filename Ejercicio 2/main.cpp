#include <stdio.h>
#include <string.h>

union Dato {
    int i;
    float f;
    char str[20];
};

int main() {
    union Dato dato;

    dato.i = 10;
    printf("dato.i: %d\n", dato.i);

    dato.f = 220.5;
    printf("dato.f: %.2f\n", dato.f);

    dato.i = 10;

    strcpy(dato.str, "C programming");
    printf("dato.str: %s\n", dato.str);

    return 0;
}
