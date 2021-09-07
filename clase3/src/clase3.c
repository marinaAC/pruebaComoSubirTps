/*
 ============================================================================
 Name        : ej233.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int dividir(int numA, int numB,int *resultado);
int sumar(int numA, int numB,int *resultado);
int restar(int numA, int numB,int *resultado);
int multiplicar(int numA, int numB,int *resultado);

int main(void) {
	setbuf(stdout,NULL);
	int num;
	int num2;
	int resultado;
	int opcion;

	printf("Ingrese el primer numero :");
	scanf("%d",&num);
	printf("Ingrese el segundo numero :");
	scanf("%d",&num2);
	printf("Ingrese el tipo de operador (1 : + ,2 : - ,3 : * ,4 : /):");
	scanf("%d",&opcion);
	switch (opcion)
	{
		case 1:
			if(sumar(num,num2,&resultado)== 0)
			{
				printf(" el final es: %d", resultado);
			}
			else {
				printf("Error");
			}
			break;
		case 2:
			if(restar(num,num2,&resultado)==0)
			{
				printf(" el final es: %d", resultado);
			}

			break;
		case 3:
			if(multiplicar(num,num2,&resultado)==0)
			{
				printf(" el final es: %d", resultado);
			}
			break;
		case 4:
			if(dividir(num,num2,&resultado)==0)
			{
				printf(" el final es: %d", resultado);
			}
			break;
		default:
			printf("Solo puede ingresar numeros del 1 al 4");
	}
	return 0;
}


	int dividir(int numA, int numB,int *resultado)
	{
		int retorno = -1;
		if (numB==0){
			printf("ingrese un numero distinto de 0");
		}
		else{
			*resultado = numA / numB;
			//printf("%d",*resultado);
			retorno = 0;
		}
		return retorno;
	}
	int sumar(int numA, int numB,int *resultado)
	{
		int retorno = -1;
		*resultado = numA + numB;
		//printf("%d",*resultado);
		retorno = 0;
		return retorno;
	}
	int restar(int numA, int numB,int *resultado)
	{
		int retorno = -1;
		*resultado = numA - numB;
		//printf("%d",*resultado);
		retorno = 0;
		return retorno;
	}
	int multiplicar(int numA, int numB,int *resultado)
	{
		int retorno = -1;
		*resultado = numA * numB;
		//printf("%d",*resultado);
		retorno = 0;
		return retorno;
	}
