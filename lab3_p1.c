//Incluir librerias
#include <stdio.h>

void main(void)
{
	//declaramos la variable global
	int N,i=0;
	int primo=0;
	//pedimos que se ingrese la variable
	printf("Determina si un numero es primo\n ingresar el valor de N:\t");
	scanf("%d",&N);
	//almacenamos las variables
	i=2;
	primo=1;
	//realizamos las iteraciones
	while(i<N-1 && primo==1){
		if(N%i==0)
			primo=0;
		//contamos los elementos que ingresan
		i++;
	}
	//Verificamos ingreso e imprimimos los datos
	if(primo==0)
		printf("no es primo\n");
	else{
		printf("es primo\n");
	}

}		
