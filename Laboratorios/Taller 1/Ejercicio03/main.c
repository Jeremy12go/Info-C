#include <stdio.h>
/*Construya un programa que permita al usuario ingresar números enteros, 
mostrando su equivalente simbólico de la tabla ASCII. El programa debe seguir
pidiendo números hasta que se ingrese “0”, momento en el cual deberá imprimir el
mensaje “Programa Terminado”.*/

int main(){
    int ascii;
    while(ascii!=0){
        printf("Ingresar numero: ");
        scanf("%d",&ascii);
        printf("%c\n",ascii);
    }
    printf("Programa Terminado");

}