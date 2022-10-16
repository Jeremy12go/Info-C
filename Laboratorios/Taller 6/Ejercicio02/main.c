#include <stdio.h>
#include <stdbool.h>
/*construya una función que reciba como parámetros dos arreglos A y B, ambos de tamaños no necesariamente iguales.
Usando un algoritmo de búsqueda de su elección, determine qué elementos de A se encuentran en B, y cuántas veces.
Si el arreglo A tienen elementos repetidos, sólo deben aparecer una vez. SI ningún elemento de A está en B, imprimir
“No hay ningún elemento”.*/

void Similitud(int largoA, int arregloA[largoA],int largoB, int arregloB[largoB]){
    //eliminar valores iguales en arreglo A
    int extra[largoA];
    int k=0;

    for(int i=0;i<largoA;i++){
        bool condicion=true;
        for(int j=0;j<largoA;j++){
            if(arregloA[i] == extra[j]){
                condicion=false;
            }
        }
        if(condicion==true){
            extra[k]=arregloA[i];
            k++;
        }
    }

    //buscar similitud
    bool igualdad=true;
    for (int i = 0; i < k; i++) {
        int contador=0;
        for(int j=0;j<largoB;j++) {
            if (extra[i] == arregloB[j]) {
                contador += 1;
            }
        }
        if(contador>0){
            printf("%d se encuentra %d veces\n",extra[i],contador);
            igualdad=false;
        }
    }
    if(igualdad==true){
        printf("No hay ningún elemento");
    }

}

int main() {

    int arregloA[]={1,1,1,1,1,1,1};
    int arregloB[]={0,4,7,2,5};
    int largoA=sizeof(arregloA)/sizeof(arregloA[0]);
    int largoB=sizeof(arregloB)/sizeof(arregloB[0]);

    Similitud(largoA,arregloA,largoB,arregloB);

    return 0;
}
