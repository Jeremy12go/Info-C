#include <stdio.h>

/*Dadas dos cadenas A y B, tal que len(B) <= len(A), determine si B está contenida en A.*/

void DeterminaConjuntoContenido(int largoA, char A[largoA], int largoB, char B[largoB]){
    int concordancias=0;
    for(int i=0;i<largoB;i++){
        for(int j=0;j<largoA;j++){
            if(B[i]==A[j]){
                concordancias+=1;
            }
        }
    }
    printf("concordancias: %d\nlargoB: %d",concordancias,largoB);
    if(concordancias>=largoB){
        printf("B esta contenida en A");
    }else{
        printf("B NO esta contenida en A");
    }
}

int Largo(char cadena[255]){
    int largo = 0;
    while (cadena[largo] != '\0') {
        largo += 1;
    }
    return largo;
}

int main() {
    char A[255];
    char B[255];
    printf("Ingresar una frase: ");
    fgets(A,255,stdin);
    printf("Ingresar una frase de dimenciones menores o iguales que la anterior: ");
    fgets(B,255,stdin);

    int largoA= Largo(A);
    int largoB= Largo(B);

    if(largoB>largoA){
        printf("Seguir las instrucciones");
    }else{
        DeterminaConjuntoContenido(largoA,A,largoB,B);
    }

    return 0;
}
