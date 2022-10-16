#include <stdio.h>

/*Dados tres números ingresados por el usuario, construya una función que imprima el mayor y el menor.*/

int main(){
    int primer_valor;
    int segundo_valor;
    int tercer_valor;

    for(int i=0;i<=2;i++){
        if(i==0){
            printf("Ingresar primer valor: ");
            scanf("%d",&primer_valor);
        }else if(i==1){
            printf("Ingresar segundo valor: ");
            scanf("%d",&segundo_valor);
        }else if(i==2){
            printf("Ingresar tercer valor: ");
            scanf("%d",&tercer_valor);
        }
    }

    int mayor;
    int menor;
    //Determinar Mayor
    if(primer_valor>=segundo_valor){
        mayor=primer_valor;
    }else if(segundo_valor>=tercer_valor){
        mayor=segundo_valor;
    }else{
        mayor=tercer_valor;
    }
    //Determinar Menos
        if(primer_valor<=segundo_valor){
        menor=primer_valor;
    }else if(segundo_valor<=tercer_valor){
        menor=segundo_valor;
    }else{
        menor=tercer_valor;
    }
    printf("mayor: %d\nmenor: %d", mayor, menor);
    return 0;
}