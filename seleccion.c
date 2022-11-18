#include <stdio.h>

int main(){
    int a[5] = {3,4,1,5,2}; //busca el elemento mas pequeño y lo intercambia con la posicion
    int i,j,aux,min; 
    //ordenamiento por seleccion
    for(i = 0;i <5; i++){ 
        min = i;  //minima posicion 
        for(j=i+1; j<5; j++){  
            if (a[j] <a[min]){ //tenemos un elemento minimo y comprobarlo
                min = j; 
            }
        }
        aux = a[i]; 
        a[i] = a[min];
        a[min] = aux;
    }

    printf("\nAscedente\n");
    for(i=0; i<5; i++){
        printf("%i",a[i]);
    }
    printf("\nDescendente\n");
    for(i= 4; i>=0; i--){
        printf("%i",a[i]);
    }

}