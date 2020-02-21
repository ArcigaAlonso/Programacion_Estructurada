//Calculadora básica (20/02/20)

#include<stdio.h>
#include<stdlib.h>

float a,b;
char Operador;

int main ()
{
	printf("Introduzca dos numeros \n");
	scanf("%f  %f",&a,&b);  
	printf("Introduzca simbolo de operacion(+,-,*,/)");
	scanf(" %c",&Operador);
	printf("\n %c", Operador);
	switch(Operador)
	{
		case '+':
			printf("%.2f+%.2f=%.2f",a,b,a+b);
			break;
			
		case '-':
		    printf("%.2f-%.2f=%.2f",a,b,a-b);
			break;
			
		case '*':
		    printf("%.2f*%.2f=%.2f",a,b,a*b);
			break;
			
		case '/':
		    printf("%.2f/%.2f=%.2f",a,b,a/b);
			break;
			
		default:
		    printf("!Error¡, El caracter no corresponde a ningun operador \n");	
	}
return 0;	
}
