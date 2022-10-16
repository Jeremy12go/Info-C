/*Realice un algoritmo que pida un número de 3 dígitos y determine si es un número
palindromo o no. Debe validar que el número sea de tres dígitos.
Número palindromo: lee igual de izquierda a derecha que de derecha a izquierda.*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
char valorEntrada[3]; /*admite 3 valores*/
bool palindromo=true;
int longitud;
int main(){
    printf("Ingresar 3 digitos: "); /*pide tres valores*/
    scanf("%s",valorEntrada);  /*guarda los valores*/
    longitud = strlen(valorEntrada)-1;  /*mide la longitud de la cadena*/
    if(longitud==2){
        int j=0;
        for(int i=longitud;i>1;i--){
            if(valorEntrada[i]!=valorEntrada[j]){
                palindromo=false;
            }
            j+=1;
        }
        if(palindromo==true){
            printf("Es palindromo");
        }else{
            printf("No es palindromo");
        }
    }else{
        printf("Deben ser 3 numeros");
    }

    return 0;
}
