#include <stdio.h>
/*Escriba un programa que construya y “retorne” una cadena C conformada por los caracteres de dos cadenas A y B,
ingresadas por el usuario. La cadena C se compone de caracteres de ambas cadenas tomados uno a uno; el primer caracter de A,
seguido del último de B, seguido del segundo de A, el penúltimo de B, el tercero de A, etc. Imprima la cadena desde el main.*/
int ComponerCadena(int largoA,char cadenaA[largoA],int largoB, char cadenaB[largoB],char cadenaC[255]){
    int maximo=0;
    if(largoA>largoB){
        maximo=largoA;
    }else{
        maximo=largoB;
    }
    int j=0;
    int k=largoA-1;
    for(int i=0;i<=maximo;i++){
        if(i%2==0){
            cadenaC[i]=cadenaA[j];
            j+=1;
        }else{
            cadenaC[i]=cadenaB[k];
            k-=1;
        }
    }
    return cadenaC;
}

int Largo(char cadena[]){
    int i=0;
    int contador=0;
    while(cadena[i]!='\0'){
        contador+=1;
        i+=1;
    }
    return contador;
}

void Imprimir(int largo, char cadena[largo]){
    int i=0;
    while(cadena[i]!='\0'){
        printf("%c",cadena[i]);
        i+=1;
    }

}

int main() {
    char cadenaA[]="HOLA MUNDO";
    char cadenaB[]="chau mundo";
    char cadenaC[255];

    int largoA= Largo(cadenaA);
    int largoB= Largo(cadenaB);
    ComponerCadena(largoA,cadenaA,largoB,cadenaB,cadenaC);
    int largoC= Largo(cadenaC);
    Imprimir(largoC,cadenaC);
    return 0;
}
