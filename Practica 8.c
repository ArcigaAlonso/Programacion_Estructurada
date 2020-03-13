#include <stdio.h>

int main()
{
	int b,n,multi,i;
	printf("Ingrese un numero base: \n");
	scanf("%d",&b);
	
	printf("Ingrese cantidad de multiplos que desea: \n");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		multi=i*b;
		printf("\t %d",multi);
	}
return 0;
}

