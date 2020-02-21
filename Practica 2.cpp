#include "stdio.h"
#include "math.h"

int a=5;
int b=3;
int c;
float d=4.5;
float e=1.2;
float f;

int main()
{
	printf("\n %d",a);
	printf("\n %d",b);
	c=a+b;
	printf("\n %d+%d=%d",a,b,c);
	
	printf("\n %d",a);
	printf("\n %d",b);
	c=a-b;
	printf("\n %d-%d=%d",a,b,c);
	
	printf("\n %d",a);
	printf("\n %d",b);
	printf("\n %d*%d=%d",a,b,c);
	
	printf("\n %d",a);
	printf("\n %d",b);
	printf("\n %d/%d=%d",a,b,c);
	
	printf("\n %.2f",d);
	printf("\n %.2f",e);
	printf("\n %.2f+%.2f=%.2f",d,e,f);
	
	printf("\n %.2f",d);
	printf("\n %.2f",e);
	printf("\n %.2f-%.2f=%.2f",d,e,f);
	
	printf("\n %.2f",d);
	printf("\n %.2f",e);
	printf("\n %.2f*%.2f=%.2f",d,e,f);
	
	printf("\n %.2f",d);
	printf("\n %.2f",e);
	printf("\n %.2f/%.2f=%.2f",d,e,f);
	
	printf("\n %f",f);	
}
