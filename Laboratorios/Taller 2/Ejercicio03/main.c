#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*Utilizando su código del ejercicio 1, el cual permite determinar los números menor y mayor, 
construya una función que imprima cuántas veces se repite cada elemento del
arreglo.*/

void ArregloConValoresAleatorios(int n,int arreglo[n])
{
    for(int i=0;i<n;i++){
        int valor;
        valor = rand() % (10);
        arreglo[i]=valor;
    }

}

void ElementosRepetidos(int n, int arreglo[n]){
    for(int i=0;i<n;i++){
        int contador=1;
        if(arreglo[i]!=-1){
            for(int j=i+1;j<n;j++){
                if(arreglo[i]==arreglo[j]){
                    contador+=1;
                    arreglo[j]=-1;
                }
            }
        printf("Hay %d valores de \"%d\"\n",contador,arreglo[i]);
        } 
    }
}


int main()
{
    srand (time(NULL));
    int n;
    printf("Ingresar tamano del arreglo: ");
    scanf("%d",&n);
    int arreglo[n];
    ArregloConValoresAleatorios(n,arreglo);
    ElementosRepetidos(n,arreglo);
    return 0;
}
