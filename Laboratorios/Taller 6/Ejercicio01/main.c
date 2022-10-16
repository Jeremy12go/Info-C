#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*Construya un programa que, dada una matriz de tamaño 𝑚 × 𝑛 rellena con números aleatorios entre 10 y 30,
transforme la matriz en un arreglo, y luego lo ordene. Imprima la matriz original y el arreglo resultante desde el main.
Ejemplo de main:*/

void RellenarMatriz(int filas,int columnas, int matriz[filas][columnas]) {
    for(int j=0; j<filas;j++){
        for(int i=0; i<columnas;i++){
           matriz[j][i]= rand() % (30-10+1) + 10;
        }
    }
}

void ImprimirMatriz(int m, int n,int matriz[m][n]){
    for (int i = 0; i < m; i++)
    {
        printf("|");
        for (int j = 0; j < n; j++)
        {
            int c=matriz[i][j];
            printf("%d ",c);
        }
        printf("|");
        printf("\n");
    }
}


void ConvertirArreglo(int filas, int columnas,int matriz[filas][columnas], int arreglo[]){
    int k=0;

    for(int j=0; j<filas;j++){
        for(int i=0; i<columnas;i++){
            arreglo[k]=matriz[j][i];
            k++;
        }
    }
}

void OrdenarArreglo(int largo, int arreglo[largo]) {
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

void Imprimir(int largo,int arreglo[largo]){
    printf("| ");
    for(int i=0;i<largo;i++){
        printf("%d ",arreglo[i]);
    }
    printf("|");
}
int main() {
    srand(time(NULL));
    int filas,columnas;

    printf("Ingresar m:");
    scanf("%d",&filas);
    printf("Ingresar n:");
    scanf("%d",&columnas);

    int largoArreglo=filas*columnas;
    int arreglo[largoArreglo];
    int matriz[filas][columnas];

    RellenarMatriz(filas,columnas,matriz);
    ImprimirMatriz(filas,columnas,matriz);
    ConvertirArreglo(filas,columnas,matriz,arreglo);
    OrdenarArreglo(largoArreglo,arreglo);
    Imprimir(largoArreglo,arreglo);

    return 0;
}
