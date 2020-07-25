#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void es_par (void);

main(){
	
	es_par(); 

	
	getch();
	
}

void es_par (){
	
	//Declaracion de variables
	int num;
	
	// Cuerpo del programa
	
	printf(" Ingrese un numero entero: ");
	scanf("%d",&num);
	
	if( num%2 == 0 ){
		printf("el numero %d es PAR!! \n ", num);
	}
	else{
		printf(" El numero %d es IMPAR! \n", num);
	}
}
