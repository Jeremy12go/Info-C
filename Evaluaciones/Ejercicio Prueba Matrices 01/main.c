#include <stdio.h>

/*Ejercicio de intercalado de arreglos, se debe imprimir un arreglo que contenga los numeros de indice par de arregloA interacalados
con los numeros de los impares de arregloB*/

void Imprimir(int largo, int arreglo[largo]){
    printf("[ ");
    for(int i=0; i<=largo; i++){
        printf("%d ",arreglo[i]);
    }
    printf("]");
}

void IntercabioArreglo(int largoA, int arregloA[largoA], int largoB, int arregloB[largoB],int largoC, int arregloC[]){
    int par=0;
    int impar=1;
    int arregloExtra[largoC];

    for(int i=0; i<largoC;i+=2) {
        if (i % 2 == 0) {
            if (impar < largoA) {
                printf("ip:%d la:%d v:%d\n", impar, largoA, arregloA[impar]);
                arregloExtra[i] = arregloA[impar];
                impar += 2;
            }else{
                arregloExtra[i] = 0;
            }
        }
    }
    for(int i=1; i<largoC;i+=2){
        if(i % 2 == 1){
            if(par<largoB) {
                printf("p:%d lb:%d v:%d\n",par,largoB,arregloB[par]);
                arregloExtra[i] = arregloB[par];
                par += 2;
            }else{
                arregloExtra[i] = 0;
            }
        }
    }
    //añadir valores faltante en numeros de 0, para eliminarlos posteriormente, dependiendo de los numeros faltantes.

    //eliminar desfaces de 0
    int x=0;
    for(int i=0;i<largoC;i++){
        printf("x:%d i:%d\n",x,i);
        if(arregloExtra[i]!=0){
            arregloC[x]=arregloExtra[i];
            x++;
        }
    }
}

int main() {
    int arregloA[]={1,2,3,4,5,6,7,8};
    int largoA=sizeof(arregloA)/sizeof(arregloA[0]);
    int arregloB[]={9,8,11,12};
    int largoB=sizeof(arregloB)/sizeof(arregloB[0]);
    //printf("LA:%d LB:%d\n",largoA,largoB);

    int maximo=0;
    if(largoA>largoB){
        maximo=largoA;
    }else{
        maximo=largoB;
    }
    int arregloC[maximo];
    IntercabioArreglo(largoA,arregloA,largoB,arregloB,maximo,arregloC);

    //sacar nuevo maximo
    int largoC=sizeof(arregloC)/sizeof(arregloC[0]) ;
    Imprimir(largoC,arregloC);

    return 0;
}
