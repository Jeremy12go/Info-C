#include <stdio.h>

/*Usando funciones donde corresponda, construya una función con parámetros que
permita dibujar un triángulo conformado por asteriscos (*). El triángulo debe ser de base
b (ejem, parámetro), y debe apuntar hacia la derecha, como se muestra en los ejemplos.
La base del triángulo debe ser impar y mayor o igual a 3; de ser menor considerar que es
3, y de ser par, sumarle 1. Su programa debe funcionar “para todos los valores de bases
posibles”, no solo para algunos (osea, debe usar ciclos).*/

int main(){
    int base;
    printf("Ingresar valor de la base:");
    scanf("%d",&base);
    if(base<3){
        base=3;
    }
    if(base%2==0){
        base+=1;
    }
    for(int i=0;i<base;i++){ /*imprime de la base*/
        printf("\n*");
        int mitad = base/2;
        if(i<mitad){
            for(int j=0; j<i ;j++){ /*imprime * mientras sea menor a la iteracion de i*/
            printf("*");
            }
        }else{
            for(int j=base-1; j>i ;j--){ /*imprime * mientras sea mayor que la iteracion, restando de 1 en 1 */
            printf("*");
            }
        }
    }
}
