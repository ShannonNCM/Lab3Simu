//Incluir librerias
#include <stdio.h>

void main(void)
{
	//declaramos la variable global
	//Variables de la parte que analiza si el numero es entero
	int N,i=0;
	int primo=0;
	//Varibles de la parte donde se ingresan los numeros del rango
	int N1,N2=0;
	int j=0;
	//Pedimos que se ingresen los datos para el rango
	printf("Determina los numeros primos dentro de un rango\n");
	//Ingresa el numero del limite inferior del rango
	printf("Ingresar el limite inferior del rango\n");
	scanf("%d",&N1);
	//Ingresa el numero del limite superior del rango
	printf("Ingresar el limite superior del rango\n");
	scanf("%d",&N2);
	//Almacenamos las variables
	j=N1;
	//Realizamos las iteraciones para el rango de datos
	while(j<=N2){
		//Ya estan declaradas las variables
		//Almacenamos las variables
		i=2;
		primo=1;
		//realizamos las iteraciones
		while(i<j && primo==1){
			if(j%i==0)
				primo=0;
			//contamos los elementos que ingresan
			i++;
		}
		//Verificamos los datos
		if(primo==1)
			//Para presentar los resultados
			printf("Los numeros primos son %d \n",j);
		//contamos los elementos del primer ciclo while
		j++;
	}
}
