#include <stdio.h>
#include <string.h>


typedef struct prueba01{
    int variable01;
    float variable02;
    char variable03;
    char variable04[20];
} var;

struct prueba02{
    int entero;
    float decimal;
    char caracter;
    char frase[20];
};

struct prueba03{
    int año;
    int mes;
    int dia;
};

void Rellenar(int _año,int _mes, int _dia, struct prueba03* i03){
    //rellanado con la fecha cuando se trabaja con punteros
    i03->año=_año;
    i03->mes=_mes;
    i03->dia=_dia;
    //cuando no se quiere trabajar con asignacion de datos, sin punteros se utiliza el punto
    //i03.año=_año; no se recomienda para este caso, ya que no retorna los datos si no se utiliza punteros
}
void Imprimir(struct prueba03 i03){
    printf("ano:%d\nmes:%d\ndia:%d\n",i03.año,i03.mes,i03.dia);
}

int main() {
    //01 forma de darle valores a la estructura
    struct prueba01 i01;

    var *variable01=23;
    i01.variable02=13.23;
    var *variable03='A';
    strcpy(i01.variable04,"algo Dentro...");//importar la libreria string.h

    //02 forma de asignar valores a estructura de la variable
    struct prueba02 i02 = {14,53.2,'c',"Aldo dentro02..."};

    // prueba03
    struct prueba03 i03[10];
    struct prueba03* punto; // para rellenar, se debe usar punteros

    i03[0].año=2022;
    i03[0].mes=10;
    i03[0].dia=11;

    punto=&i03[1]; // se le da la direccion de memoria, donde esta la variable
    Rellenar(1999,12,7,punto); /*se pasa como parametro el puntero, en donde se pondran
    los datos que se le dan a la funcion*/

    //impresiones
    printf("v01:%d\nv02:%f\nv03:%c\nv04:%s\n",variable01,i01.variable02,variable03,i01.variable04);
    //printf("v11:%d\nv12:%f\nv13:%c\nv14:%s\n",i02.entero,i02.decimal,i02.caracter,i02.frase);
    Imprimir(i03[0]);
    Imprimir(i03[1]);
    return 0;
}
