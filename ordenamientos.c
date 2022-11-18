#include<stdio.h>
#include <stdlib.h>

int A[5];

//Funcion de intercambio
void swap(int *x, int *y){
	int key = *x;
	*x = *y;
	*y = key;
}

int particion(int A[], int izq, int der){
	int pivote = A[izq]; //Seleccionamos el elemento pivote
	while(1){
		while(A[izq] < pivote){ //Compara que todos los elementos a la izquierda sean menores al pivote
			izq++;
		}
		while(A[der] > pivote){ //Compara que todos los elementos a la derecha sean mayores al pivote
			der--;
		}
		if(izq >= der){
			return der;
		}else{
			swap(&A[izq], &A[der]);
			izq++;
			der--;
		}
	}
}

//Función de sorteo rapido/quicksort
void quicksort(int A[], int izq, int der){
	if(izq < der){
		int indice = particion(A, izq, der);
		quicksort(A, izq, indice);
		quicksort(A, indice+1, der);
	}
}

//Función de sorteo por insersión/insertion sort
void insertion_sort(int A[], int n){
	for(int j = 1; j < n; j++){
		int key = A[j];
		int i = j - 1;

		while(i > -1 && A[i] > key){
			A[i+1] = A[i];
			i = i - 1;
		}
		A[i+1] = key;
	}
}

//Función de examen ejemplo
void examen(int A[], int n){
	for (int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(A[i] > A[j]){
				swap(&A[i], &A[j]);
			}
		}
	}
}

//Función de sorteo por burbuja/bubble sort
void bubble(int A[], int n){
	for(int i = 1; i < n; i++){
		for(int j = 0; j < n-1; j++){
			if(A[j] > A[j+1]){
				swap(&A[j], &A[j+1]);
			}
		}
	}
}

//Leer desde un archivo txt
void leer_archivo(){
	FILE* archivo;
	char texto[20];
	char c;
	int i=0;
	int j=0;

	archivo = fopen("datos.txt", "rt");
	do{
		c = fgetc(archivo);
		if (c == ',') {
			A[j] = atoi(texto);
				j++;
			for (int z = 0; z<i; z++)
				texto[z]=0;
			i=0;
			continue;
		}
		texto[i] = c;
		i++;
	}while (c != EOF);
}

//Imprimir los numeros en pantalla
void pantalla(int A[], int n){
	for(int i = 0; i < n-1; i++)
		printf("%d, ", A[i]);
	printf("%d", A[n-1]);
	printf("\n");
}

void busqueda(int A[], int n)
{
int r=0;
printf("que numero quiere buscar");
scanf("%d",&r);

for(int i = 0; i < n; i++){
               if(A[i]==r){
        printf("el lugar es %d \n",i);
	break;
	       }
}
printf("no existe el numero");
          
}
int main(){

	int n = 10;
	int num= 0;
	int pos= 0;

	leer_archivo();
	//insertion_sort(A, n);
	bubble(A, n);
	 pantalla(A, n);

	//quicksort(A, 0, n-1);
	//examen(A, n);
	busqueda(A,n);

	


}