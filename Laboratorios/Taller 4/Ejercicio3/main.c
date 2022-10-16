#include <stdio.h>
#include <stdbool.h>
/*Construya una función que, dada una cadena, imprima “es palíndroma” o “no es palíndroma”,
dependiendo de si efectivamente lo es o no.*/


int DeterminarPalindromo(int largo,char cadena[largo]){
    bool condicion=true;
    int j=largo-2;
    for(int i=0;i<=j;i++){
        if(cadena[i]!=cadena[j]){
            condicion=false;
            break;
        }
        j-=1;
    }
    return condicion;
}
int Largo(char cadena[255]){
    int largo = 0;
    while (cadena[largo] != '\0') {
        largo += 1;
    }
    return largo;
}
void Imprimir(bool condicion){
    if(condicion==true){
        printf("Es palindroma");
    }else{
        printf("No es palindroma");
    }
}

int main() {
    char cadena[255];

    printf("Ingresar una frase:");
    fgets(cadena,255,stdin);

    int largo= Largo(cadena);

    bool condicion=DeterminarPalindromo(largo,cadena);
    Imprimir(condicion);

    return 0;
}
