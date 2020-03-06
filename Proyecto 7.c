#include <stdio.h>

float Prom=0,Sum=0;
int Num=0,i=-1;      

int main ()
{
	do
	{
	    Sum=Sum+Num;
		printf("Ingrese un numero:");
		scanf("%d",&Num);
		i++;        
	    
	}
	while(Num>=0);
		if(i==0)
	printf("El promedio no se puede hacer \n");
	else
	Prom=Sum/i;
	printf("El promedio es: %.2f",Prom);
return (0);
}



