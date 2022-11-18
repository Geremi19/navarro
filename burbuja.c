#include <stdio.h>

int main(){
    int vector[10]={10,2,3,35,4,7,9,11,44,6}; //variable vector
    int aux;

    for(int i = 0; i < 10; i++){
        
        for (int j=0; j<10;j++){
            if(vector[j] > vector[j+1]){  //dentro de los corchetes tenemos variable j es decir ocupe el lugar dentro del corchete

                aux = vector[j+1]; 
                vector[j+1] = vector[j]; //se da a la variable de j si es mayor el dato de la siguiente posicion
                vector[j] = aux;
            }
        }
    }

    for(int i = 0; i<10;i++){
        printf("%d\t",vector[i]);
    }
    return 0; 
}