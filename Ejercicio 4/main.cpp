#include <stdio.h>
#include <string.h>

typedef struct {
    char nombre[100];
    int edad;
    float promedio;
} Estudiante;

int main() {
    Estudiante estudiante3;

    strcpy(estudiante3.nombre, "Pedro");

    estudiante3.edad = 25;
    estudiante3.promedio = 9.7;


    return 0;
}
