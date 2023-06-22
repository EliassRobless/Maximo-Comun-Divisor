#include <stdio.h>
#include <math.h>

int main () //Robles Ramirez Angel Elias 1CV4
{
	int a,b,max=0;
	printf ("\nEncontrar el m.c.d. de dos numeros enteros");
	printf("\nIngrese un numero entero: ");
	scanf("%d",&a);
	printf("\nIngrese el segundo numero: ");
	scanf("%d",&b);
	
	if (a>0 && b>0 && a!=b)
	{
		if (a>b)
		{
			int aux=a;
			a=b;
			b=aux;
		}
		
		int i=a;
		
		while (!max && i>=1)
		{
			if (a % i ==0 && b % i == 0)
			{
				printf ("\nEL MCD es %d",i);
				max=1;
			}
			else
			{
				i--;
			}
		}

	}
	else
	{
		if (a==b)
		{
			printf("\nDebes ingresar numeros diferentes");
		}
		else
		{
			printf("\nDebes ingresar numeros positivos");
		}
	}
	
	
	
	return 0;
}
