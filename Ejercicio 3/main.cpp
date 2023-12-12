#include <stdio.h>
#include <string.h>

#define MAX_NOMBRE 100

struct Estudiante {
    char nombre[MAX_NOMBRE];

};

struct Estudiante copiarEstudiante(struct Estudiante est);

int main() {

    return 0;
}

struct Estudiante copiarEstudiante(struct Estudiante est) {
    struct Estudiante nuevoEst;
    strncpy(nuevoEst.nombre, est.nombre, MAX_NOMBRE - 1);
    nuevoEst.nombre[MAX_NOMBRE - 1] = '\0';
    return nuevoEst;
}
