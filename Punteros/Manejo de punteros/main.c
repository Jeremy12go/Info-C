#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void VariablesDireccion(int *punto){

    int a=3, b=6;
    punto=&a;//apunta a la variable
    punto=&b;//solo apunta a una variable

    printf("%d\n",*punto);//forma de imprimir el valor apuntado

    //formas de imprimir la direccion del elemento apuntado
    printf("%p\n",punto);
    printf("%p\n",&b);//forma de imprimir la memoria "%p"

    //el valor apuntado cambia si el valor de la variable cambia
    b=7;
    printf("%d\n",*punto);//forma de imprimir el valor apuntado
    b=111;
    printf("%d\n",*punto);//forma de imprimir el valor apuntado

}

void AritmeticaPunteros(int *punto){

    int a[10]={9,8,7,6,5,4,3,2,1,0};
    printf("%d\n",a[0]);
    printf("%d\n",*(a+3));//apunta a la direccion del arreglo mas 3, osea a[3], para imprimir solamente

    //cambiar valores del arreglo
    punto=&a[3];//apunta a la cuarta posicion del arreglo
    *punto=11;//cambia el valor de esa posicion
    punto=&a[7];
    *punto=-11;

    //imprimir
    printf("| ");
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("|");

}
void prueba02(){
    bool var01=true;
    int var02=120;
    float var03=12.5;
    char var04[20]="Algo...";
    char var05='A';

    char *punteroChar;
    punteroChar=&var04;
    printf("Valores del punteroChar a variable char:%s \n",punteroChar); // el puntero debe ser del mismo tipo que el dato al que apunta.
    punteroChar=&var02;
    printf("Valores del punteroChar a variable entera: %d\n",punteroChar); // si el puntero no es del mismo tipo que el dato al que apunta, imprime basura
    punteroChar=&var05;
    printf("Valores del punteroChar a variable entera: %c\n",*punteroChar); // tonar la diferencia en el uso del puntero para imprimir un caracter y una cadena.

    float *punteroFloat;//aun que float y int sean valores, la estructura es diferente por lo que se necesitan un puntero para cada estructura de variable.
    int *punteroEntero;
    bool *punteroBooleano;

    punteroBooleano=&var01;
    printf("Valores del punteroBooleano a variable bool:%d \n",*punteroBooleano);
    punteroEntero=&var02;
    printf("Valores del punteroEntero a variable int:%d \n",*punteroEntero);
    punteroFloat=&var03;
    printf("Valores del punteroFloat a variable float:%f \n",*punteroFloat);




}
//arreglo de enteros
void prueba03(){
    int *arregloPuntero[20];
    for(int i=0;i<10;i++){
        *(arregloPuntero+i)=i+1; //Ingreso de datos por aritmetica de punteros
        //arregloPuntero[i]=i+1; //Ingreso de datos de forma comun
    }

    for(int i=0;i<10;i++){
        printf("-%d",arregloPuntero[i]);
    }
}
//arreglo de caracteres
void prueba04(){
    char *arregloPuntero[20];
    for(int i=0;i<10;i++){
        *(arregloPuntero+i)=100+i-3; // Aritmetica de punteros
        // se le da enteros
        //arregloPuntero[i]= 100+i-3;// Forma comun
    }

    for(int i=0;i<10;i++){
        printf("-%c",arregloPuntero[i]);//pero imprime caracteres, por la transformacion de codigo ASCII
    }
}
int main() {
    int *punto;
    char *cadena=malloc(sizeof (char)*255);

    //VariablesDireccion(punto);
    //AritmeticaPunteros(punto);

    //printf("Ingresar una frase larga:");
    //fgets(cadena,255,stdin);

    //printf("%s",cadena);
    //free(cadena); //siempre se debe liberar la memoria luego de un malloc


    prueba02();
    //prueba03();
    //prueba04();
    return 0;
}
