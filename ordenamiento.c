#include <stdio.h>

int main(){
    int a[5] = {3,1,4,2,5};
    int i, pos, aux; //pos es de posicion y aux para ayudar

    for (i =0; i<5; i++){
        pos= 1; 
        aux= a[i]; //guarda el valor donde va el arreglo
        while ((pos>0)&&(aux <a[pos-1])) //mientras la posicion anterios sea mayor a 0 y aux sea la poscion -1 
        {
            a[pos] = a[pos-1]; // cambiar el numero de la izaquierda con el dato
            pos--;
        }
        a[pos] = aux;
        
    }
    printf("Ascendente\n");
    for (i=0;i<5;i++)

    {
        printf("%i",a[i]);
    }
    printf("Descendente\n");
    for ( i = 4; i >=0; i--)
    {
        printf("%i",a[i]);
    }

    return 0;
    
}