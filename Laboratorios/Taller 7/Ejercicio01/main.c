#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
//Jeremi Isaac Arriagada Pizarro


void sub_Menu(){
    printf("-----------La persona es?------------\n");
    printf("1. Es un amigo\n");
    printf("2. Es un familiar\n");
    printf("#. Cualquier otro valor para volver atras\n");
    printf("-----------------------------------\n");
}

typedef struct {
    int anno;
    int mes;
    int dia;
}F_actual;

typedef struct{
    int anno;
    int mes;
    int dia;
    int esAmigo;
    int esFamilia;
    char caracter;
    char nombre[20];
}Contacto;

void Ingreso_Datos(int registro, Contacto arreglo[255]){
    int eleccion;
    char cadenaExtra[20];

    sub_Menu();

    scanf("%d",&eleccion);
    getchar();

    if(eleccion==1){
        arreglo->esAmigo = eleccion;
/*
        printf("Contacto #%d -- Ingresar su nombre:",registro);
        fgets(cadenaExtra, 255, stdin);
        strcpy(arreglo[registro].nombre,cadenaExtra);

        printf("Contacto #%d -- Ingresar su anno de nacimiento:",registro);
        scanf("%d",&arreglo[registro].anno);
        getchar();

        printf("Contacto #%d -- Ingresar su mes de nacimiento:",registro);
        scanf("%d",&arreglo[registro].mes);
        getchar();

        printf("Contacto #%d -- Ingresar su dia de nacimiento:",registro);
        scanf("%d",&arreglo[registro].dia);
        getchar();*/

        printf("Char #%d -- Ingresar su char:",registro);
        scanf("%c",&arreglo[registro].caracter);
        getchar();
        printf("Char: %c",arreglo[registro].caracter);

    }else if (eleccion==2){
        arreglo->esFamilia = eleccion;

        printf("Contacto #%d -- Ingresar su nombre:",registro);
        fgets(cadenaExtra, 255, stdin);
        strcpy(arreglo[registro].nombre,cadenaExtra);

        printf("Contacto #%d -- Ingresar su anno de nacimiento:",registro);
        scanf("%d",&arreglo[registro].anno);
        getchar();

        printf("Contacto #%d -- Ingresar su mes de nacimiento:",registro);
        scanf("%d",&arreglo[registro].mes);
        getchar();

        printf("Contacto #%d -- Ingresar su dia de nacimiento:",registro);
        scanf("%d",&arreglo[registro].dia);
        getchar();
    }else{}
}

void Imprimir_Mes_C(int registro, int fecha_a[3],Contacto arreglo[registro]){
    for(int i=0;i<registro;i++){
        if(arreglo[i].mes==fecha_a[1]){
            printf("Contacto #%d\n", i);
            printf("Nombre:%s\n", arreglo[i].nombre);
            if(arreglo->esAmigo==1){
                printf("Relacion con Pepita: Amigo\n");
            }else{
                printf("Relacion con Pepita: Familia\n");
            }
            printf("Fecha de Cumpleaños:%d-%d-%d\n", arreglo[i].dia, arreglo[i].mes, arreglo[i].anno);
        }
    }
}

void Imprimir_Full_C(int registro,Contacto arreglo[registro]){

    for(int i=0;i<registro;i++) {

        printf("Contacto #%d\n", i);
        printf("Nombre:%s\n", arreglo[i].nombre);
        if(arreglo->esAmigo==1){
            printf("Relacion con Pepita: Amigo\n");
        }else{
            printf("Relacion con Pepita: Familia\n");
        }
        printf("Fecha de Cumpleaños:%d-%d-%d\n", arreglo[i].dia, arreglo[i].mes, arreglo[i].anno);
    }
}

void Imprimir_Next_C(int registro, int fecha_a[3],Contacto arreglo[registro]){

    int min_registro=0;
    int min_Mes=100;
    int i=0;

    for(;i<registro;i++){
        if(fecha_a[1] < arreglo[i].mes){
            if(min_Mes>arreglo[i].mes){
                printf("%d\n",arreglo[i].mes);
                min_Mes=arreglo[i].mes;
                min_registro=i;
            }
        }
    }
    printf("Contacto #%d\n", i);
    printf("Nombre:%s\n", arreglo[min_registro].nombre);
    if(arreglo->esAmigo==1){
        printf("Relacion con Pepita: Amigo\n");
    }else{
        printf("Relacion con Pepita: Familia\n");
    }
    printf("Fecha de Cumpleaños:%d-%d-%d\n", arreglo[min_registro].dia, arreglo[min_registro].mes, arreglo[min_registro].anno);
}

void Menu_general(){
    printf("----------Que deseas hacer?---------\n");
    printf("1. Registrar persona\n");
    printf("2. Mostrar los cumpleannos del mes\n");
    printf("3. Mostrar todos los cumpleannos restantes\n");
    printf("4. Mostrar el siguiente cumpleanno\n");
    printf("#. Cualquier otro valor para salir\n");
    printf("-----------------------------------\n");
}

int main() {
    int fecha_a[2];
    int registro=0;
    bool condicion=true;
    Contacto contactos[255];

    time_t t;
    struct tm *fecha;
    time(&t);
    fecha = localtime(&t);
    fecha_a[0]=fecha-> tm_year + 1900; //anno
    fecha_a[1]=fecha-> tm_mon + 1; //mes
    fecha_a[2]=fecha-> tm_mday; //dia

    while(condicion){
        int eleccion=0;

        Menu_general();

        scanf("%d",&eleccion);
        getchar();

        if(eleccion==1){
            Ingreso_Datos(registro, contactos);
            registro++;
        }else if(eleccion==2){
            Imprimir_Mes_C(registro,fecha_a,contactos);
        }else if(eleccion==3){
            Imprimir_Full_C(registro, contactos);
        }else if(eleccion==4){
            Imprimir_Next_C(registro,fecha_a,contactos);
        }else{
            condicion=false;
        }
    }
    return 0;
}
