#include <stdio.h>
// sucecion 5,15,45,135
long expon(long numero);

int main()
{
    int numero;
    printf("Ingresa un numero:\n");
    scanf("%i",&numero);
    for(int i = 0; i < numero; i++)
    {
        printf("%ld\n", expon(i));
    }
        
     return 0;
}

long expon(long numero)    
{
    if(numero <=1)
    {
        return 5;
    }else{
        return(numero * expon(numero)*3);
    }
}