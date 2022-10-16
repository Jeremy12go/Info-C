#include <stdio.h>

void Ordenamiento(int largo, int arreglo[largo]){

    for(int i=0;i<largo;i++){
        int minValor=arreglo[i];
        int minIndice=i;
        for(int j=i;j<largo;j++){
            if(arreglo[j]<minValor){
                minValor=arreglo[j];
                minIndice=j;
                printf("nuevo: %d\n",minValor);
            }
        }
        int guardar=arreglo[i];
        arreglo[i]=minValor;
        arreglo[minIndice]=guardar;
    }

}
void Imprimir(int largo,int arreglo[largo]){
    printf("| ");
    for(int i=0;i<largo;i++){
        printf("%d ",arreglo[i]);
    }
    printf("|");
}

int main() {

    int arreglo[]={5,1,3};
    int largo=sizeof(arreglo)/sizeof(arreglo[0]);

    Ordenamiento(largo,arreglo);
    Imprimir(largo,arreglo);
    return 0;
}
