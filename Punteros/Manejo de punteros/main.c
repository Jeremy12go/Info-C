#include <stdio.h>
#include <stdlib.h>

void VariablesDireccion(int *punto){

    int a=3, b=6;
    punto=&a;//apunta a la variable
    punto=&b;//solo apunta a una variable

    printf("%d\n",*punto);//forma de imprimir el valor apuntado

    //formas de imprimir la direccion del elemento apuntado
    printf("%p\n",punto);
    printf("%p\n",&b);//forma de imprimir la memoria "%p"

    //el valor apuntado cambia si el valor de la variable cambia
    b=7;
    printf("%d\n",*punto);//forma de imprimir el valor apuntado
    b=111;
    printf("%d\n",*punto);//forma de imprimir el valor apuntado

}

void AritmeticaPunteros(int *punto){

    int a[10]={9,8,7,6,5,4,3,2,1,0};
    printf("%d\n",a[0]);
    printf("%d\n",*(a+3));//apunta a la direccion del arreglo mas 3, osea a[3], para imprimir solamente

    //cambiar valores del arreglo
    punto=&a[3];//apunta a la cuarta posicion del arreglo
    *punto=11;//cambia el valor de esa posicion
    punto=&a[7];
    *punto=-11;

    //imprimir
    printf("| ");
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("|");

}

int main() {
    int *punto;
    char *cadena=malloc(sizeof (char)*255);

    //VariablesDireccion(punto);
    //AritmeticaPunteros(punto);

    printf("Ingresar una frase larga:");
    fgets(cadena,255,stdin);

    printf("%s",cadena);
    free(cadena); //siempre se debe liberar la memoria luego de un malloc

    return 0;
}
