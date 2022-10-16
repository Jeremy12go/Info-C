#include <stdio.h>
/*Usando funciones donde corresponda, construya un menú que muestre las 4
operaciones básicas (suma, resta, multiplicación, y división), y la opción “salir”. El menú
debe permitir al escoger la operación que desea realizar, y pedir los números como
corresponda. Para la primera operación, debe pedir dos números; para las operaciones
siguientes debe usar el resultado de la operación anterior, y pedir un número al usuario.*/

int menu(){
    printf("\nMenu de opcciones:\n-----------------\n1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n0. Salir");
}

int main(){
    int seleccion;
    int segundoValor=0;
    int interacion=0;
    while(seleccion!=0){
        int primerValor=0;
        menu();
        printf("\nEleccion: ");
        scanf("%d",&seleccion);
        if(seleccion==1){
            if(interacion==0){
                printf("Ingresar primer valor: ");
                scanf("%d",&primerValor);
                printf("Ingresar segundo valor: ");
                scanf("%d",&segundoValor);
                segundoValor=primerValor+segundoValor;
            }else{
                printf("Ingresar valor: ");
                scanf("%d",&primerValor);
                segundoValor=primerValor+segundoValor;
            }
        }else if(seleccion==2){
            if(interacion==0){
                printf("Ingresar primer valor: ");
                scanf("%d",&primerValor);
                printf("Ingresar segundo valor: ");
                scanf("%d",&segundoValor);
                segundoValor=primerValor-segundoValor;
            }else{
                printf("Ingresar valor: ");
                scanf("%d",&primerValor);
                segundoValor=segundoValor-primerValor;
            }
        }else if(seleccion==3){
            if(interacion==0){
                printf("Ingresar primer valor: ");
                scanf("%d",&primerValor);
                printf("Ingresar segundo valor: ");
                scanf("%d",&segundoValor);
                segundoValor=primerValor*segundoValor;
            }else{
                printf("Ingresar valor: ");
                scanf("%d",&primerValor);
                segundoValor=primerValor*segundoValor;
            }
        }else if(seleccion==4){
            if(interacion==0){
                printf("Ingresar primer valor: ");
                scanf("%d",&primerValor);
                while(segundoValor==0){
                    printf("Ingresar segundo valor: ");
                    scanf("%d",&segundoValor);
                }
                segundoValor=primerValor/segundoValor;
            }else{
                while(primerValor==0){
                    printf("No puede ser 0\nIngresar valor: ");
                    scanf("%d",&primerValor);
                }
                segundoValor=segundoValor/primerValor;
            }
        }else if(seleccion==0){
        }else{
            printf("\"\"\"\"\"Seleccion no valida\"\"\"\"\"");
        }
        interacion++;
        printf("El resultado es:%d",segundoValor);
    }
    return 0;
}
