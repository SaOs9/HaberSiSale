#include <stdio.h>
#include <conio.h>
 
struct nodo{
	int dato;
	struct nodo* siguiente;
	struct nodo* atras;
};

nodo * primero = NULL;
nodo * ultimo = NULL;

void insertarNodo();

void desplegarListaPU();
void desplegarListaUP();

int main(){
	insertarNodo();
    insertarNodo();
	insertarNodo();
	insertarNodo();
	insertarNodo();
	printf("\n");
	desplegarListaPU();
	printf("\n");
	desplegarListaUP();
	
	return 0;

}	
	

void insertarNodo(){

	nodo * nuevo = new nodo;
	printf("Ingrese el dato que tendra el nuevo nodo:");
	scanf("%d", &nuevo->dato);
	
	if(primero==NULL){
		primero = nuevo;
		primero->siguiente = NULL;
		primero->atras = NULL;
		ultimo = primero;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimo;
		ultimo = nuevo;
	}
}

void desplegarListaPU(){
	nodo * actual= new nodo;
	actual = primero;
	if(primero!=NULL){
	  while(actual != NULL){
	  	printf("\n %d", actual->dato);
	  	actual = actual->siguiente;
	  }	
	}else{
		printf("\n La lista se encuentra vacia \n\n");
		
	}
}


void desplegarListaUP(){
	nodo * actual = new nodo;
	actual = ultimo;
	if(primero!=NULL){
	  while(actual != NULL){
	  	printf("\n %d", actual->dato);
	  	actual = actual->atras;
	  }	
	}else{
		printf("\n La lista se encuentra vacia \n\n");
		
	}
}


