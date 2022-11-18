/*quicksort va ir dividiendo el arreglo en pedazos mas chicos y tratarlos de ordenar hasta llegar al finarl
para las particiones elegir un pivote(que puede ser el primero, el ultimo o cualquiera), separar en la izq si es menor que el pivote si no sera en la derecha
 {3,4,1,5,2}
a la izquierda quedara los elementos menores al pivote y a la derecha seran mayor
el pivote quedaria en medio ser el elemento ordenado*/

#include<conio.h>
#include <stdio.h>
int main(){
	int A[5] = {3,4,1,5,2}; //arrreglo
	int i,j,aux;
	
    //IMPRECION DE NUMEROS SIN ORDENAR
	printf("Los numeros sin ordenar\n");
	for(i=0;i<5;i++){
		printf("%i ",A[i]);
	}
	
    //METODO DE ORDENAMIENTO 	
	for(i=0;i<5;i++){
            j = i;
            aux = A[i];
            while((j> 0)&&(aux<A[j-1])) {
                A[j] = A[j - 1];
                j--;
            }
            A[j] = aux;
    }
    printf("\n\n");
    
    //IMPRECION DE NUMEROS ORDENADOS DE MANERA ACENDENTE
	printf("Los numeros ordenados de manera acendente \n");
	for(i=0;i<5;i++){
		printf("%i ",A[i]);
	}
	printf("\n\n");
	
	//IMPRECION DE NUMEROS ORDENADOS DE MANERA DECENDENTE
	printf("Los numeros ordenados de manera decendente \n");
	
	for(i=4;i>=0;i--){
		printf("%i ",A[i]);
	}
	getch();
	return 0;
}