# Maximo-Comun-Divisor

El siguiente programa esta hecho en lenguaje C. Tiene el proposito de encontrar el Maximo Comun Divisor de dos numeros enteros ingresados
por el usuario. 
El maximo comun divisor de a y b es el divisor comun mas grande y se denota como d = (a,b), m.c.d. de a y b.

Asi d = (a,b) ↔ d/a y d/b

Para ejecutar el programa es necesario utilizar cualquier compilador de lenguaje C (online o aplicacion) como lo son Dev C++, Compiler Code C, etc.

Algunos ejemplos de valores de entrada y salida esperados son: 

1.- 12, 16 = 4

2.- 8, 32 = 8

3.- 15, 8 = 1

Integrantes Equipo 5: Robles Ramirez Angel Elias, Bazan Tehuitzil Oscar Damian, Ortiz Martinez Isai Eliezer, Santiago Guerrero Isaac Alejandro, Solares Velasco Arturo.

        
    #include <stdio.h>
     
    int main ()
     {
    	int a,b,max=0;         // Variables
        
	    printf ("\nEncontrar el m.c.d. de dos numeros enteros");
	    printf("\nIngrese un numero entero: ");                  // Entrada
	    scanf("%d",&a);
	    printf("\nIngrese el segundo numero: ");                // Entrada
	    scanf("%d",&b);
        
        if (a>0 && b>0 && a!=b)
	    {
    	    	   if (a>b)
		   {
			int aux=a;
			a=b;		// Poner el numero mas grande primero
			b=aux;
		   }
		
		int i=a;
		
		while (!max && i>=1)
		{
			if (a % i ==0 && b % i == 0)
			{
				printf ("\nEL MCD es %d",i);     // Salida
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
			printf("\nDebes ingresar numeros diferentes");    // Salida
		}
		else
		{
			printf("\nDebes ingresar numeros positivos");     // Salida
		}
	      }
		
	
	  return 0;
      }
