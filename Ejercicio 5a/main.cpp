#include <stdio.h>
#include <string.h>

typedef struct {
    char nombre[100];
    int edad;
    float promedio;
} Estudiante;

void imprimirEstudiante(Estudiante est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}

int main() {
    Estudiante estudiante1;

    imprimirEstudiante(estudiante1);

    return 0;
}
