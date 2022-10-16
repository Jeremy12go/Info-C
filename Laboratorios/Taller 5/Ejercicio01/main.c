#include <stdio.h>

/*Construya una función que reciba como parámetro una matriz de tamaño 𝑚 × 𝑛, rellenada con números aleatorios
entre 1 y 20. La función debe ordenar los elementos de cada fila de dicha matriz intercalando el tipo de orden
entre ascendente y descendente. Cada fila de la matriz resultante debe ser ordenada sin utilizar modificaciones posteriores
(ej., no usar invertir una fila). Imprima la matriz desde el main antes y después de ordenarla.*/

void OrdenarMatriz(int n, int m,int matriz[n][m]){

    for(int k=0; k<n; k++){
            int guardar;
            if (k % 2 == 0) {
                for(int j=0; j<m-1;j++){
                    for(int i=0; i<m-j-1;i++){
                        if (matriz[k][i] > matriz[k][i + 1]) {
                            guardar = matriz[k][i];
                            matriz[k][i] = matriz[k][i+1];
                            matriz[k][i + 1] = guardar;
                        }
                    }
                }
            } else {
                for(int j=m; j>0;j--){
                    for(int i=m-j; i>0;i--){
                        if(matriz[k][i]>matriz[k][i-1]){
                            guardar=matriz[k][i];
                            matriz[k][i]=matriz[k][i-1];
                            matriz[k][i-1]=guardar;
                        }
                    }
                }
            }
    }
}
void ImprimirMatriz(int n, int m,int matriz[n][m]){
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

    int matriz[3][3]={{9,1,7},{2,3,5},{8,6,4}};
    int filas=sizeof (matriz)/sizeof (matriz[0]);
    int columnas=sizeof (matriz[0])/sizeof (matriz[0][0]);

    OrdenarMatriz(filas,columnas,matriz);
    ImprimirMatriz(filas,columnas,matriz);
    return 0;
}
