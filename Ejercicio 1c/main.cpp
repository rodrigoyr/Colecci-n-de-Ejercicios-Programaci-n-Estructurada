#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {
    struct Estudiante *estudiante2 = (struct Estudiante *)malloc(sizeof(struct Estudiante));

    if (estudiante2 != NULL) {
        strcpy(estudiante2->nombre, "Ana");
        estudiante2->edad = 22;
        estudiante2->promedio = 9.8;

        printf("Nombre: %s\n", estudiante2->nombre);
        printf("Edad: %d\n", estudiante2->edad);
        printf("Promedio: %.2f\n", estudiante2->promedio);

        free(estudiante2);
    } else {
        fprintf(stderr, "Error: No se pudo asignar memoria.\n");
    }

    return 0;
}