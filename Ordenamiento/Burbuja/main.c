#include <stdio.h>
#include <stdbool.h>

void Burbuja(int largo, int arreglo[largo]) {
        for(int j=0; j<largo-1;j++){
            for(int i=0; i<largo-1-j;i++){
                int guardar;
                if(arreglo[i]>arreglo[i+1]){
                    guardar=arreglo[i];
                    arreglo[i]=arreglo[i+1];
                    arreglo[i+1]=guardar;
                }
            }
        }
    }
void BurbujaInvertida(int largo, int arreglo[largo]) {
    for(int j=largo; j>0;j--){
        for(int i=largo-j; i>0;i--){
            int guardar;
            if(arreglo[i]>arreglo[i-1]){
                guardar=arreglo[i];
                arreglo[i]=arreglo[i-1];
                arreglo[i-1]=guardar;
            }
        }
    }
}
void Imprimir(int largo,int arreglo[largo]){
    printf("| ");
    for(int i=0;i<largo;i++){
        printf("%d ",arreglo[i]);
    }
    printf("|");
}

int main() {
    int entrada[7] = {117, 0, 7, 6, 1, 23, 9};
    int largo = sizeof(entrada) / sizeof(entrada[0]);
    //Burbuja(largo, entrada);
    BurbujaInvertida(largo, entrada);
    Imprimir(largo, entrada);
}