#include <stdio.h>
/*Dado un número ingresado por el usuario, construya una función que imprima los números pares de atrás hacia adelante, hasta llegar a 0. Considere que se pueden
ingresar números negativos.*/

int main(){
    int entrada;
    printf("Ingresar un numero: ");
    scanf("%d",&entrada);
    if(entrada>0){
        if(entrada%2==0){
            entrada-=1;
        }
        while(entrada>=0){
            printf("%d\n",entrada);
            if(entrada==1){
                entrada-=1;
            }else if(entrada>1){
                entrada-=2;
            }else{
                break;
            }
            
    }
    }else if (entrada<0){
        if(entrada%2==0){
            entrada+=1;
        }
        while(entrada<=0){
            printf("%d\n",entrada);
            if(entrada==-1){
            entrada+=1;
            }else if(entrada<-1){
                entrada+=2;
            }else{
                break;
            }
    }
    }

}