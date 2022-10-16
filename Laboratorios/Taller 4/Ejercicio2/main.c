#include <stdio.h>

/*Construya una función que reciba como parámetro dos cadenas, y retorne “1 “si son
iguales, o “0” si no lo son. Considere que ambas cadenas pueden tener distinto tamaño.*/

int Comparar(int largoCadena1, char cadena1[largoCadena1], int largoCadena2, char cadena2[largoCadena2]) {
    int resultado = 1;

    if (largoCadena1 > largoCadena2) {
        for (int i = 0; i < largoCadena1; i++) {
            if (cadena1[i] = !cadena2[i]) {
                resultado = 0;
            }
        }
    } else {
        for (int i = 0; i < largoCadena2; i++) {
            if (cadena2[i] = !cadena1[i]) {
                resultado = 0;
            }
        }
    }
    return resultado;
}
int Largo(char cadena[255]){
    int largo = 0;
    while (cadena[largo] != '\0') {
        largo += 1;
    }
    return largo;
}

int main() {
    char cadena1[255];
    char cadena2[255];
    printf("Ingresar una frase: ");
    fgets(cadena1,255,stdin);
    printf("Ingresar otra frase: ");
    fgets(cadena2,255,stdin);

    int largoCadena1=Largo(cadena1);
    int largoCadena2= Largo(cadena2);

    int  resultado=Comparar(largoCadena1,cadena1,largoCadena2,cadena2);
    printf("%d",resultado);
    return 0;
}
