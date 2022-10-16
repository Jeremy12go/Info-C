#include <stdio.h>
#include <stdbool.h>
/*Construya una función que reciba como parámetro una matriz de tamaño 𝑚 × 𝑛 rellenada con números aleatorios
entre 1 al 20, y un número “X” a buscar. La función debe imprimir la matriz, y luego buscar e imprimir la posición
de cada una de las ocurrencias del número buscado, imprimiendo “Número X encontrado en la posición M,N”
tantas veces como sea necesario, o “Número no encontrado, de ser el caso*/

void Busqueda(int n, int m,int matriz[n][m],int buscado){
    bool condicion=false;
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            if(buscado==matriz[i][j]){
                printf("Esta contenido en la pisicion %dx%d\n",i,j);
                condicion=true;
            }
        }
    }
    if(condicion==false){
        printf("No esta contenido");
    }
}

void ImprimirMatriz(int n, int m,int matriz[n][m]){
    for (int i = 0; i < m; i++)
    {
        printf("| ");
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
    int buscado;
    int matriz[3][3]={{9,1,7},{2,7,5},{8,6,8}};
    int filas=sizeof (matriz)/sizeof (matriz[0]);
    int columnas=sizeof (matriz[0])/sizeof (matriz[0][0]);

    printf("Ingresar un numero a buscar: ");
    scanf("%d",&buscado);

    ImprimirMatriz(filas,columnas,matriz);
    Busqueda(filas,columnas,matriz,buscado);

    return 0;
}
