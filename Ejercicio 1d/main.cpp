#include <stdio.h>
#include <string.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

extern struct Estudiante estudiante1;

int main() {
    struct Estudiante *punteroEst = &estudiante1;
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", punteroEst->nombre, punteroEst->edad, punteroEst->promedio);
    return 0;
}

struct Estudiante estudiante1 = {"Juan", 20, 9.5};
