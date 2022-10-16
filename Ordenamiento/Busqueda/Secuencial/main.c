#include <stdio.h>
#include <stdbool.h>

int Busqueda(int largo, int arreglo[largo],int buscado){
    bool condicion=false;
    for(int i=0; i<largo; i++){
        if(buscado==arreglo[i]){
            condicion=true;
            break;
        }
    }
    return condicion;
}
void Imprimir(bool condicion){
    if(condicion==true){
        printf("Esta contenido");
    }else{
        printf("No esta contenido");
    }
}

int main() {
    int entrada[7]={117,0,7,6,1,23,9};
    int largo=sizeof (entrada)/sizeof(entrada[0]);
    int buscado;
    bool condicion;
    printf("Ingresar un numero a buscar: ");
    scanf("%d",&buscado);
    condicion=Busqueda(largo, entrada, buscado);
    Imprimir(condicion);
    return 0;
}
