#include <stdio.h>

/*Dada una matriz de tamaño 𝑚 × 𝑛, determine e imprima su transpuesta*/

int Transpuesta(int m,int n, int matriz[m][n], int matrizSalida[n][m]){
    for (int i=0; i < m; i++)
    {
        int indice=0;
        for (int j = 0; j < n; j++)
        {
            int valor=matriz[i][j];
            matrizSalida[j][i]=valor;
            indice+=1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("|");
        for (int j = 0; j < m; j++)
        {
            int c=matrizSalida[i][j];
            printf("%d ",c);

        }
        printf("|");
        printf("\n");
    }

}
int main() {
    //int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int matriz[5][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}};

    int m=sizeof (matriz)/sizeof (matriz[0]);
    int n=sizeof (matriz[0])/sizeof (matriz[0][0]);
    int matrizSalida[n][m];
    Transpuesta(m,n,matriz,matrizSalida);

    return 0;
}
