#include <stdio.h>

/*Crear una estructura para los alumnos de una escuela. Pedirle al usuario que digite la cantidad de alumnos
y almacenar los datos dentro de la estructura con su respectivo | nombre | edad | calificacion /ingles, mate, historia/|
y por ultimo, imprimir toda la estructura de cada alumno*/

struct Fecha{
    int dia;
    int mes;
    int anno;
}Fecha;

typedef struct Estudiantes{
    struct Fecha *Fecha;
    char c_nombre[20];
    int edad;
    float ingles, matematicas, historia;
}Alumno;


void Ingreso_Datos(int cantidad){

    Alumno Alumnos[cantidad];
    struct Estudiantes actual;
    for(int i=0;i<cantidad;i++){
        actual=Alumnos[i];

        printf("Alumno[%d] -- Ingresar su nombre completo:",i);
        fgets(actual.c_nombre, 255, stdin);

        printf("Alumno[%d] -- Ingresar su dia de nacimiento:",i);
        scanf("%d",&actual.Fecha->dia);
        getchar();
        printf("Alumno[%d] -- Ingresar su mes de nacimiento:",i);
        scanf("%d",&actual.Fecha->mes);
        getchar();
        printf("Alumno[%d] -- Ingresar su año de nacimiento:",i);
        scanf("%d",&actual.Fecha->anno);
        getchar();

        /*printf("Alumno[%d] -- Ingresar su edad:",i);
        scanf("%d",&Alumno[i].edad);
        getchar();
        printf("Alumno[%d] -- Ingresar su promedio de Ingles:",i);
        scanf("%f",&Alumno[i].ingles);
        getchar();
        printf("Alumno[%d] -- Ingresar su promedio de Matematicas:",i);
        scanf("%f",&Alumno[i].matematicas);
        getchar();
        printf("Alumno[%d] -- Ingresar su promedio de Historia:",i);
        scanf("%f",&Alumno[i].historia);
        getchar();*/
    }

}

void Imprimir_Datos(int cantidad){
    struct Estudiantes Alumno[cantidad];
    for(int i=0;i<cantidad;i++){
        printf("Alumno#%d\n",i);
        printf("Nombre:%s\n",Alumno[i].c_nombre);
        printf("Fecha_I:%d-%d-%d\n",Alumno[i].Fecha->dia,Alumno[i].Fecha->mes,Alumno[i].Fecha->anno);
    }
}

int main() {
    int Cantidad_Alumnos;
    printf("Ingresar cuantos alumnos existen:");
    scanf("%d",&Cantidad_Alumnos);
    getchar();


    Ingreso_Datos(Cantidad_Alumnos);
    Imprimir_Datos(Cantidad_Alumnos);
    return 0;
}
