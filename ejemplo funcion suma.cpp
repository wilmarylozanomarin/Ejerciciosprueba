#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 
 int suma (void);
 
 main(){
 	int resultado;
resultado= suma();
printf("el resultado de la suma es %d", resultado);
system ("pause");
 }
 //desarrollo de la funcion suma
 int suma (void){
 	int numero1, numero2, resultado;
 	printf("Ingrese el primer numero:");
 	scanf("%d",&numero1);
 	printf("Ingrese el segundo numero:");
 	scanf("%d",&numero2);
 	resultado=numero1 + numero2;
 	return resultado;
 }
