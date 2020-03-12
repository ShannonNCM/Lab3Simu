/*
Autor: shannon-pc
Compilador: gcc (Ubuntu 9.2.1-9ubuntu2) 9.2.1 20191008
compilado: gcc Lab3_p2.c -o Lab3_p2 
Fecha: Wed 11 Mar 2020 10:36:57 PM CST
Librerias: stdio, etc
Resumen: Este programa lee dos numeros enteros para generar un rango y muestra todos los numeros primos dentro del rango.
Entrada: Enteros, dos numeros N1 y N2.
Salida: Enteros, numeros primos dentro del rango.
*/
 
//Librerias
#include <stdio.h>

//Inicio del programa
void main(void)
{
	//Se declaran las variables a utilizar
	//Variables de la parte que determina si un numero es primo
	int N,i=0;
	int primo=0;
	//Variables de la parte donde se ingresan los numeros del rango a analizar
	int N1,N2=0;
	int j=0;
	//Muestra en consola lo que realiza el programa
	printf("Determina los numeros primos dentro de un rango\n");
	//Ingreso del limite inferior del rango
	printf("Ingresar el limite inferior del rango\n");
	scanf("%d",&N1);
	//Ingreso del limite superior del rango
	printf("Ingresar el limite superior del rango\n");
	scanf("%d",&N2);
	//Se almacenan las variables para la comprobacion de los numeros dentro del rango
	j=N1;
	//Inicio de las iteraciones para los numeros dentro del rango
	//Se evalua para un numero menor o igual al limite superior del rango
	while(j<=N2){
		//Inicio de las iteraciones para determinar si el numero es primo
		//Las variables ya han sido declaradas al inicio
		//Se almacenan las variables para la comprobacion si es primo
		i=2;
		primo=1;
		//Inicio de iteraciones para determinar si es primo
		while(i<j && primo==1){
			//Se establece que si el residuo del numero ingresado y el valor de la iteracion es cero entonces no es un numero primo
			if(j%i==0)
				primo=0;
			//Se raliza el conteo de los elementos que ingresan a la comprobacion de si es primo
			i++;
		}
		//Se verifican los datos
		if(primo==1)
			//Se presentan los resultados
			printf("Los numeros primos son %d \n",j);
		//Se hace el conteo de los elementos que ingresaron al analisis de los valores del rango
		j++;
	}
}
