#include <stdio.h>


int main(void) {
    int a=5, b=10, c=5;
    int *p1, *p2, *p3;
    p1=&a;
    p2=&b;
    p3=&c;
    *p3 = a + *p1;
    *p1 = *p2 + b;
    *p2 = a + b;
    printf("Valor de a : %i\n", a); //a=5
    printf("Dirección de a : %p\n\n", &a); //&a=0x printf("Valor de b : %i\n", b);
    printf("Dirección de b : %p\n\n", &b);// b=??
    printf("Valor de c : %i\n", c);//c=10
    printf("Dirección de c : %p\n\n", &c);
    printf("---------------\n");
    printf("Valor apuntado p1 : %i\n", *p1); //5
    printf("A dónde apunta p1 : %p\n\n", p1);//hacia a
    printf("Valor apuntado p2 : %i\n", *p2);//10
    printf("A dónde apunta p2 : %p\n\n", p2);//hacia b
    printf("Valor apuntado p3 : %i\n", *p3);//5
    printf("A dónde apunta p3 : %p\n\n", p3);//hacia c
    return 0;
}