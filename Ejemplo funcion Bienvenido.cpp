#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void bienvenido (char nomb[]);


main(){
	
	
	char nombre [25];
	printf("Ingrese su nombre");
	fflush(stdin);
	scanf("%s",&nombre);
	bienvenido(nombre);
	system("pause");
	
}

//Desarrollo de la funcion bienvenido
void bienvenido (char nomb[]){
	printf("Bienvenido (a) %s \n", nomb);
}

