#include <stdio.h>

/*Construya una función que, dada una matriz de tamaño 𝑚 × 𝑛, retorne un arreglo
(ver comentarios) con la suma de cada una de las filas de la matriz. Imprima la matriz y el
arreglo resultante*/
int SumaFilasMatriz(int m, int n,int matriz[m][n],int arreglo[m]){

    for (int i = 0; i < m; i++){
        int contador=0;
        for (int j = 0; j < n; j++){
            contador+=matriz[i][j];
        }
        arreglo[i]=contador;
    }
}
void Imprimir(int m, int n,int matriz[m][n],int arreglo[m]){
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
    for(int i=0;i<m;i++) {
        if (i == 0) {
            printf("{%d,", arreglo[i]);
        } else if (i > 0 && i < m-1) {
            printf("%d,", arreglo[i]);
        } else{
            printf("%d}", arreglo[i]);
        }
    }
}
int main() {
    //int matriz[3][3]={{1,4,2},{7,3,4},{6,5,4}};
    int matriz[5][3]={{9,6,5},{1,3,5},{7,1,4},{5,4,1},{7,6,2}};

    int m=sizeof (matriz)/sizeof (matriz[0]);
    int n=sizeof (matriz[0])/sizeof (matriz[0][0]);
    int arreglo[m];

    SumaFilasMatriz(m,n,matriz,arreglo);
    Imprimir(m,n,matriz,arreglo);
    return 0;
}
