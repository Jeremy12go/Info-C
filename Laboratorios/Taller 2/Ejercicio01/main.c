#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*Dado un número entero “n” ingresado por el usuario, construya una 
función que cree un arreglo (de tamaño n) y lo rellene con números aleatorios, usando la función rand.
Luego, cree otra función que imprima el menor y mayor número del arreglo.*/

void ArregloConValoresAleatorios(int n,int arreglo[n])
{
    for(int i=0;i<n;i++){
        int valor;
        valor = rand() % (100);
        arreglo[i]=valor;
    }

}

void ImprimirMayorMenor(int n,int arreglo[n]){
    int mayor;
    int menor;
    for(int k=0;k<n;k++){
        if(mayor<arreglo[k]){
            mayor=arreglo[k];
        }
        if(menor>arreglo[k]){
            menor=arreglo[k];
        }
    }
    printf("\nEl Mayor valor del arreglo es: %d\nEl menor valor del arreglo es: %d",mayor,menor);
}

int main()
{
    srand (time(NULL));
    int n;
    printf("Ingresar tamano del arreglo: ");
    scanf("%d",&n);
    int arreglo[n];
    ArregloConValoresAleatorios(n,arreglo);
    ImprimirMayorMenor(n,arreglo);
    return 0;
}
