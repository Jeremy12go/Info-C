#include <stdio.h>

/*Construya una función que, dada una cadena de caracteres, retorne la cadena invertida*/

void Invertir(int largo,char cadena[largo],char inversoCadena[largo]){

    int j=largo;
    for(int i=0;i<=largo;i++){
        inversoCadena[i]=cadena[j];
        j-=1;
    }
}
int Largo(char cadena[255]){
    int largo = 0;
    while (cadena[largo] != '\0') {
        largo += 1;
    }
    return largo;
}

int main() {
    char cadena[255];

    printf("Ingresar una frase: ");
    fgets(cadena,255,stdin);

    int largo=Largo(cadena);
    char inversoCadena[largo];

    Invertir(largo,cadena,inversoCadena);

    for (int j = 0; j <= largo; ++j) {
        printf("%c",inversoCadena[j]);
    }
    return 0;
}
