#include <stdio.h>
/*Funciones que tienen la propiedad de llamarse así misma son recursivas*/

//definir funcion
long Factorial(long numero);

int main(){

    int numero;
    printf("Ingresa un numero:");
    scanf ("%i",&numero);
    //imprimir
    for(int i=0;i<=numero;i++)
    {
        printf("%ld\n",Factorial(i));
    }
    return 0;
}
//crear funcion factorial
long Factorial(long numero)    
{
    if(numero <=1)
    {
        return 1;
    }else{
        return(numero * Factorial(numero-1));
    }
}


/*Ejemplo del factorial de un numero
    5!=5*4*3*2*1 o 5*4!
    4!=4*3*2*1 o 4*3!
    3!=3*2*1 o 3*2!
    2!=2*1 o 2*1!
    1!= 1
    0!= 1
*/
