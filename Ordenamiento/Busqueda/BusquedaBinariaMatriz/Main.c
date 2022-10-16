#include <stdio.h>
#include <stdbool.h>

void DarValoresMatriz(int n, int matriz[n][n]) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = k;
            k += 1;
        }
    }
}


void ImprimirMatriz(int n, int matriz[n][n]){
    for (int i = 0; i < n; i++)
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

int BuscarValor(int largo, int matriz[largo][largo]){
    int valor;
    int ubicacion;
    int iteraciones = 0;
    bool condicion = true;

    printf("\nIngresar valor a buscar: ");
    scanf("%d", &valor);

    int max = largo;
    int min = 0;
    int puntoMedio = (max - min)/2;


    while (condicion) {
        iteraciones += 1;
        //colocar los diferentes puntos limitantes, para luego ir delimitando las 4 secciones.
        if (valor == matriz[min][min]) {
            ubicacion = min;
            condicion = false;
            break;
        } else if (valor == matriz[max]) {
            ubicacion = max;
            condicion = false;
            break;
        }else if (valor == matriz[puntoMedio]) {
            ubicacion = puntoMedio;
            condicion = false;
            break;
        }else {
            if(valor < matriz[puntoMedio]) {
                max = puntoMedio;
                puntoMedio=((max - min) / 2)+ min;
            }else if (valor > matriz[puntoMedio]) {
                min = puntoMedio;
                puntoMedio = ((max - min) / 2) + min;
            }else if ((max - min) <=1) {
                printf("Me pase poh");
                condicion = false;
            }
            printf("Min: %d ; Max: %d\n",min,max);
        }
    }
    ubicacion+=1;
    printf("El valor \"%d\" esta en la posicion: %d\nEncontrado en %d iteraciones", valor, ubicacion, iteraciones);
}
int main(){

    int tamaño=5;
    int matriz[tamaño][tamaño];

    DarValoresMatriz(tamaño,matriz);
    ImprimirMatriz(tamaño,matriz);
    BuscarValor(tamaño,matriz);

}