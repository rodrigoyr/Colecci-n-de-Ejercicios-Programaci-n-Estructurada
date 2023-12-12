#include <stdio.h>

typedef struct {
    char nombre[100];
    int edad;
    float promedio;
} Estudiante;

void modificarEstudiante(Estudiante *est) {
    est->edad = 30;
}

int main() {
    Estudiante estudiante1;

    modificarEstudiante(&estudiante1);


    return 0;
}
