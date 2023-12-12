
struct Estudiante {
    char nombre[MAX_NOMBRE];
    int edad;
    float promedio;
};

int main() {
    struct Estudiante estudiante1 = {"Juan", 20, 85.5};

    printf("Nombre: %s\n", estudiante1.nombre);
    printf("Edad: %d\n", estudiante1.edad);
    printf("Promedio: %.2f\n", estudiante1.promedio);

    return 0;
}
