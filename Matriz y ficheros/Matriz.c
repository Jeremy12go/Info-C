#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "Funciones.h"

int matrizEntera(){
    int n=0;
    printf("Ingresar dimenciones de la matriz: ");
    scanf("%d",&n);
    int k=1;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j]=k;
            k+=1;
        }
    }

    //a[3][3]=111;cambio de valores
    for (int i = 0; i < n; i++)
    {
        printf("|");
        for (int j = 0; j < n; j++)
        {
            int c=a[i][j];
            printf("%d ",c);
            
        }
        printf("|");
        printf("\n");
    }
}

int ValorAleatorio1(int n){
    //Valores aleatorios para las posiciones de las murallas
    srand (time(NULL));
    int valor;
    valor = rand() % (n);//valor aleatorio
    //printf("Valor Random: %d\n",valor);
    return valor; 
}

int  main(){
    srand (time(NULL));
    printf("%i",ValorAleatorio1(10));
    printf("%i",ValorAleatorio1(10));
    printf("%i",ValorAleatorio1(10));
    //matrizEntera();
    //MatrizChar();
    //MatrizEnteraConEntrada();
    //MatrizTablero();
    return 0;
}