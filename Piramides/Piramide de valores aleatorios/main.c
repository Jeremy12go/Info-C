#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Dados dos números enteros 𝑚 y 𝑛 ingresados por el usuario, construya una función que cree una matriz triangular
superior de tamaño 𝑚 × 𝑛, rellenándola con números aleatorios entre 50 y 100. Imprima la matriz.*/

void IngresarValoresMatriz(int n, int m, int matriz[n][m]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            //ingresar valor aleatorio
            int k=rand() % (100-50+1) + 50;
            matriz[i][j]=k;
        }
    }
}


void ImprimirMatriz(int n, int m,int matriz[n][m]){
    for (int i = 0; i < n; i++)
    {
        printf("|");
        for (int j = 0; j < m; j++)
        {
            int c=matriz[i][j];
            printf("%d ",c);

        }
        printf("|");
        printf("\n");
    }
}

int main() {
    srand (time(NULL));
    int n,m;
    int matriz[n][m];

    printf("Ingresar valor de Hipotenusa m: ");
    scanf("%d",&m);
    printf("Ingresar valor de Cateto n: ");
    scanf("%d",&n);

    IngresarValoresMatriz(n,m,matriz);
    ImprimirMatriz(n,m,matriz);
    return 0;
}