#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Dados dos números enteros 𝑚 y 𝑛 ingresados por el usuario, construya una función que cree una matriz triangular
superior de tamaño 𝑚 × 𝑛, rellenándola con números aleatorios entre 50 y 100. Imprima la matriz.*/

void IngresarValoresMatriz(int m, int n, int matriz[m][n]){
    int indice=0;
    int valor;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(indice<=j){
                valor=rand() % (100-50+1) + 50;
                matriz[i][j]=valor;

            }else{
                matriz[i][j]=0;
            }
        }
        indice+=1;
    }
}


void ImprimirMatriz(int m, int n,int matriz[n][m]){
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

int main() {
    srand (time(NULL));
    int m,n;

    printf("Ingresar valor de Hipotenusa m: ");
    scanf("%d",&m);
    printf("Ingresar valor de Cateto n: ");
    scanf("%d",&n);

    int matriz[m][n];
    IngresarValoresMatriz(m,n,matriz);
    ImprimirMatriz(m,n,matriz);
    return 0;
}