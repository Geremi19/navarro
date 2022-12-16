/*
    Arbol binario en C
    -Definir la estructura de un arbol binario
    -Funcion para crear un Nodo;
    -Funcion para agregar un valor
    -Funcion para recorrer el arbol
*/

#include<stdio.h>
#include<stdlib.h>

//definir la estructura del nodo
struct nodo{
    struct nodo * padre;
    struct nodo * izquierdo;
    struct nodo * derecho;
    int valor;
};

struct nodo * crear_nodo(struct nodo * padre, int valor);
void agregar_valor(struct nodo * arbol,int valor);

int main(){
    //definir el arbol
    struct nodo * arbol;
    arbol = crear_nodo(NULL,40);
    agregar_valor(arbol,10);
    agregar_valor(arbol,50);
    agregar_valor(arbol,1);
    agregar_valor(arbol,2);
    agregar_valor(arbol,45);
    agregar_valor(arbol,4);
}

//funcion para crear el nodo
struct nodo * crear_nodo(struct nodo * padre, int valor){ //recibe nodo padre y el valor
    struct nodo *n = calloc(sizeof(struct nodo), 1);
    n->padre = padre;
    n->valor = valor;
    return n;
};

//funcion para crear valor
void agregar_valor(struct nodo * arbol,int valor){
    struct nodo * temp,*pivote;
    int derecho = 0;
    if(arbol){
        temp = arbol;
        while (temp != NULL){
            //evaluar nodo donde nos quedemos
            pivote = temp;
            if (valor > temp->valor){
                //derecho
                temp = temp->derecho;
                derecho = 1;
            }
            else {
                //izquierdo
                temp = temp ->izquierdo;
                derecho = 0;
            }
        }            
        temp = crear_nodo(pivote,valor);
        if (derecho){
            printf("Insertando %i del lado derecho de :%i\n",valor,pivote->valor);
            pivote->derecho = temp;
        }else {
            printf("Insertando %i del lado izquierdo de :%i\n",valor,pivote->valor); 
            pivote->izquierdo = temp;

        }
        
    }else{
        printf("Error no esta inicializado el arbol");
    }
    
}