#include <stdio.h>
#include <stdbool.h>
/*Dada una matriz M de tamaño 𝑚 × 𝑛, y un arreglo A de tamaño máximo 𝑛, construya un programa que permita determinar
si los elementos de A están contenidos en alguna fila de M. Si todos los elementos están contenidos en alguna fila,
la función debe imprimir “A está contenido en M[k]”, donde “k” es la posición en la fila correspondiente; caso contrario imprimir “A no está
contenido en M”.*/
void DeterminarContenido(int largoF,int largoC, int matriz[largoF][largoC],int largoArreglo, int arreglo[largoArreglo]){
    int aumento=0;
    int k=0;
    bool condicion=false;
    for(int i=0;i<largoF;i++){
        int contador;
        for(int j=0;j<largoC;j++){
            for(int n=0;n<largoArreglo;n++){
                if(matriz[i][j]==arreglo[n]) {
                    contador+= 1;
                    aumento+=1;
                }
                if(contador>=largoArreglo){
                    k=i;
                    printf("A está contenido en M[%d]\n",k);
                    condicion=true;
                    break;
                }
            }

        }
        contador=0;
        aumento=0;
    }
    if(condicion==false) {
        printf("A no está contenido en M");
    }
}


int main() {
    int matriz[3][6]={{1,2,3,4,5,6},
                      {1,4,5,6,8,9},
                      {1,2,3,4,5,7}};
    int arreglo[]={7,5,6,8};
    int largoArreglo=sizeof(arreglo)/sizeof(arreglo[0]);
    int largoF=sizeof(matriz)/sizeof(matriz[0]);
    int largoC=sizeof(matriz[0])/sizeof(matriz[0][0]);

    DeterminarContenido(largoF,largoC,matriz,largoArreglo,arreglo);
    return 0;
}
