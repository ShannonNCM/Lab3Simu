/*
Autor: shannon-pc
Compilador: gcc (Ubuntu 9.2.1-9ubuntu2) 9.2.1 20191008
compilado: gcc Lab3_p1.c -o Lab3_p1 
Fecha: Tue 10 Mar 2020 09:23:24 PM CST
Librerias: stdio, etc
Resumen: Este programa lee un numero mayor que 1 y determina si es un numero primo.
Entrada: Entero, un numero N
Salida: "Es primo" o "No es primo"
*/
 
//Librerias
#include <stdio.h>

//Inicio del programa
void main(void)
{
	//Se declaran las variables a utilizar
	int N,i=0;
	int primo=0;
	//Muestra en consola lo que realiza el programa y pide el ingreso del numero a evaluar
	printf("Determina si un numero es primo\n ingresar el valor de N:\t");
	//Obtiene los datos que ingresa al usuario
	scanf("%d",&N);
	//Se almacenan todas las variables
	i=2;
	primo=1;
	//Inicio de las iteraciones con while
	//Se establece que se evalue para un numero un entero menor al ingresado y establecemos el valor verdadero a la variable primo
	while(i<N-1 && primo==1){
		//Se establece que si el residuo del numero ingresado y el valor de la iteracion es cero entonces no es un numerooooo primo 
		if(N%i==0)
			primo=0;
		//Se realiza el conteo de los elementos que ingresan
		i++;
	}
	//Verificacion de ingreso de los datos e impresion
	//Si el dato obtenido en la iteracion es falso entonces el numero no es primo
	if(primo==0)
		printf("No es primo\n");
	//Si no se cumple la condicion entonces el numero es primo
	else{
		printf("Es primo\n");
	}
}
