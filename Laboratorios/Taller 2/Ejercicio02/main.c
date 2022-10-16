#include <stdio.h>
/*Escriba la función que calcula los “k” primeros números de Fibonacci,
 almacenándolos en un arreglo predefinido, de tamaño 100. Imprima el arreglo.*/

void ArregloConFibonacci(int k,int arreglo[]){
    arreglo[0]=0;
    arreglo[1]=1;
    for(int i=2;i<k;i++){
        int sumatoria;
        int valor=arreglo[i-1]+arreglo[i-2];
        arreglo[i]=valor;
    }

    for(int j=0;j<k;j++){
        printf("|%d|",arreglo[j]);
    }
}
int main(){
    int k=0;
    printf("Ingresar los valores de que K que quiere imprimir: ");
    scanf("%d",&k);
    int arreglo[k];
    ArregloConFibonacci(k,arreglo);
}