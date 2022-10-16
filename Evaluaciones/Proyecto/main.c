#include <stdio.h>

/*Generar estructuras de datos, que contengan el proceso de una biblioteca
informacion de encagados, libros, alumnos, y peticiones, atrasos*/

typedef struct fecha{
    int ano;
    int mes;
    int dia;
}Fecha;

typedef struct Encargados{
    struct fecha *f_contratado;

    //int f_nacimiento;
    //com_nombre;
    //estudios;
}Encargado;


/*
typedef struct Libros{
    f_escritura;
    f_ingresado;
    titulo;
    estado;//esta disponible para pedirlo
}Libro;

typedef struct Alumnos{
    com_nombre;
    f_nacimiento;
    f_ingreso;
    carrera;
    l_poder; //libros en su poder
    deudas; //multas de la biblioteca por atrasos
}Alumno;

typedef struct Bibliotecas{

}Biblioteca;*/

int main(){

    Fecha f_nacimiento;

    return 0;
}