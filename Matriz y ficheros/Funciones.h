/*Las librerias personales se definen con .h , y de las cual podemos definir funciones para utilizar
en otros achivos*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ValorAleatorio(int n){
    //Valores aleatorios para las posiciones de las murallas
    int valor;
    valor = rand() % (n);//valor aleatorio
    //printf("Valor Random: %d\n",valor);
    
    return valor;
}

char MatrizChar(){
    int n=0;
    printf("Ingresar dimencion de la matriz: ");
    scanf("%d",&n);
    char k;
    char a[n][n];
    for (int i = 0; i < n; i++)
    {  
        for (int j = 0; j < n; j++)
        {
            printf("Ingresar letra: ");
            scanf("%c",&k);
            k=getchar();
            a[i][j]=k;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("|");
        for (int j = 0; j < n; j++)
        {
            char c=a[i][j];
            printf("%c ",c);
            
        }
        printf("|");
        printf("\n");
    }
}
int MatrizEnteraConEntrada(){
    int n=0;
    printf("Ingresar dimenciones de la matriz: ");
    scanf("%d",&n);
    int k=0;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Ingresar valor: ");
            scanf("%d",&k);
            //k=getchar();
            a[i][j]=k;
        }
    }

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

char MatrizTablero(){
    int n=0;
    printf("Ingresar dimenciones del tablero: ");
    scanf("%d",&n);
    char tablero[n][n];

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

            tablero[i][j]=219;
        }
    }

    for(int i=0;i<n;i++){
        printf("|");
        for(int j=0;j<n;j++){
            char c=tablero[i][j];
            printf("%c",c);
            
        }
        printf("|\n");
    }
    printf("\n");
    //Añadir murallas 
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int valor=ValorAleatorio(n);
                if(i==valor){
                    tablero[i][j]=176;
                }else if(j==valor){
                    tablero[i][j]=176;
                }
                
            }
    }
        for(int i=0;i<n;i++){
        printf("|");
        for(int j=0;j<n;j++){
            char c=tablero[i][j];
            printf("%c",c);
            
        }
        printf("|\n");
    }
}
