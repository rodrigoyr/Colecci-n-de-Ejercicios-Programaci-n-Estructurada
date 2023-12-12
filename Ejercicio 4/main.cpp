typedef struct Estudiante Estudiante;

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

Estudiante estudiante1;
strcpy(estudiante1.nombre, "Juan");
estudiante1.edad = 20;
estudiante1.promedio = 8.5;

Estudiante estudiante2;
strcpy(estudiante2.nombre, "Maria");
estudiante2.edad = 22;
estudiante2.promedio = 9.1;

Estudiante estudiante3;
strcpy(estudiante3.nombre, "Pedro");
estudiante3.edad = 25;
estudiante3.promedio = 9.7;