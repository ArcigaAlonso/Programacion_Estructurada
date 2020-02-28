/*Practica No.5:Ciclos While*/
#include <stdio.h>

float Prom=0;
float Sum=0;
int Num=0;
int i=0;

int main()
{
	while (Num>=0)
	{
		printf("Ingrese un numero:");
		scanf("%d",&Num);
		if (Num>=0)
		{
			i++;
			Sum=Sum + Num;
		}
	}
	Prom=Sum/i;
	printf("El promedio es: %.2f",Prom);
    return 0;
}
