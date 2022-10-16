#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

/*Construya un programa que permita ingresar múltiples frases por teclado. Cada frase está delimitada por un
salto de línea (es decir, un “Enter”); y el programa termina cuando se ingresa una cadena vacía. Para cada frase
ingresada, imprima la versión “abreviada”, que consiste en la misma frase sin sus vocales. Debe usar punteros para
resolver el problema; está prohibido usar corchetes (excepto para la declaración de variables).*/


int main() {
    bool condicion=true;

    while(condicion){
        char *frase=malloc(sizeof (char)*200);
        char *respaldo= malloc(sizeof (char)*200);

        printf("Ingresar una frase:");
        fgets(frase,255,stdin);

        if(frase[1]=='\0'){
            condicion=false;
        }
        //Largo
        int x=0;
        while(frase[x]!= '\0'){
            x+=1;
        }
        //eliminar vocales
        int j=0;
        for(int i=0;i<x;i++){
            if(*(frase+i)!='a' && *(frase+i)!='A' && *(frase+i)!='e' && *(frase+i)!='E' && *(frase+i)!='i' && *(frase+i)!='I' && *(frase+i)!='o' && *(frase+i)!='O' && *(frase+i)!='u' && *(frase+i)!='U'){
                printf("%c",*(frase+i));
                respaldo[j]=*(frase+i);
                j+=1;
            }
        }
        free(frase);
        free(respaldo);
    }
    return 0;
}
