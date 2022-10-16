#include <stdio.h>
#include <string.h>

int pruebas1(){
    int valorE=15;
    float valorD=3.121231412;
    char valorC='D';
    char numero[10];
    printf("%d",valorE); //%d y %i para valores enteros
    printf("\n%c",valorC); //%c para valores char
    printf("\n%f",valorD); //%f para valores decimales
    printf("\n%.2f",valorD);//%.nf n(2 para el ejemplo) determina cuantos decimales queremos que tenga nuestro numero decimal
    printf("\n%s",numero);//%s para strings
    printf("\n Algo\n para\nimprimir"); //la impresion normal es similar a python
    //suma de variables
    float resultado= valorD + valorE;
    printf("\n%f",resultado);
    int entrada;
    printf("\nIngresar valor: ");
    scanf("%d",&entrada); /*guarda en la bariable entreda un dato ingresado, al ingresar datos de tipo string
    solo guardara hasta identificar un espacio*/
    /*fgets(cadena,tamaño,stdin);lee una cadena con espacios para una cadena de tamaño especifico*/
    scanf("%s",numero); /*guarda en la cadena datos ingresados*/
     /*esta funcion dice, que se ingresara un tipo de variable %d (entero)
        y que se guardara en la variable entrada, el simbolo & le dice a c
        que a esa variable se guardara*/
    getchar();//utilizado para evitar el salto de caracter que genera el scanf
    printf("\nIngresaste: %d",entrada);
    int longitud = strlen(numero)-1;  /*mide la longitud de la cadena*/


    char abc[]="algo";
    int num=13;
    printf("Las letras %s y los numeros %d",abc,num);
    /*para condiciones generales and o or 
    and = &&
    or = ||*/
}

int pruebas2(){//funcion sin entrada de tipo entero
    int valor1=0;
    int valor2=0;
    printf("Ingresar valor1: ");
    scanf("%d",&valor1);
    printf("Ingresar valor2: ");
    scanf("%d",&valor2);
    printf("Valores ingresados %d y %d",valor1,valor2);
}
int prueba3(int a, int b){ //funcion con condicion de entrada entera
    int resultado = a+b;
    return resultado;
}

int prueba4(int i){//funcion de comportamiento de switch
    switch (i)
    {
    case 1:
        printf("Es 1");
        break;
    case 2:
        printf("Es 2");
    default:
        printf("No es ninguno");
        break;
    }
}
int prueba5(){
    int  i = 19;
while(i>=0){
    printf("N:%d\n",i);
    i-=2;
}
}
char prueba6(){
    char abc[]="0123456789AB";
    char b[]="asdkasodkasd";
    int largo=strlen(b);
    int largo2= sizeof(abc)/sizeof(abc[0]);
    int largo3=0;
    while(abc[largo3]!= 0){ //la funcion strlen funciona igual que el ciclo
        largo3+=1;
    }
    printf("%s ;  largo: %d  ; largo2: %d  ; largo3: %d\n",abc,largo,largo2,largo3);
    //cambio de caracteres en una cadena
    //se debe por medio de un ciclo y insertando caracter por caracter

    //ingresar una cadena
    printf("Ingresar una frase: \n");
    fgets(abc,largo3,stdin);
    printf("Ingresar una frase: \n");
    fgets(b,largo,stdin);

    printf(abc);
    printf(b);


    //para determinados casos que tome el salto de linea o enter en la cadena se reemplaza por un fin de cadena
    int i=0;
    while(abc[i]!=0 || abc[i]!="\n"){
        i+=1;
    }
    if(abc[i]=="\n"){
        abc[i]="\0";
    }
    printf(abc);
}
int main()
{
    //pruebas1();
    //pruebas2();
    //int suma=prueba3(5,5);
    //printf("la suma 5+5 es:%d",suma);
    //prueba4(1);
    prueba6();
    return 0;
}
