#include <stdio.h>
#include <stdbool.h>

/*Construya una función que reciba como parámetro (al menos) una matriz de tamaño 𝑚 × 𝑛,
y que imprima en pantalla los mensajes “SI es una matriz triangular superior” o “NO es una
matriz triangular superior”, dependiendo de si dicha matriz es o no una matriz triangular superior.*/

void DeterminarMatriz(int m,int n,int matriz[m][n]){
    int indice=0;
    bool condicion=false;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if(indice<=j){
                if(matriz[i][j]!=0){
                    condicion=true;
                }
            }else{
                if(matriz[i][j]!=0){
                    condicion=false;
                }
            }
        }
        indice+=1;
    }
    if(condicion==true){
        printf("Es una matriz triangular superior");
    }else{
        printf("No es una matriz triangular superior");
    }
}

int main() {
    //int matriz[3][3]={{1,4,2},{0,3,4},{0,0,4}};
    int matriz[3][2]={{1,2},{0,3},{0,0}};
    int m=sizeof(matriz) / sizeof(matriz[0]);
    int n=sizeof (matriz[0])/sizeof (matriz[0][0]);

    DeterminarMatriz(m,n,matriz);

    return 0;
}
