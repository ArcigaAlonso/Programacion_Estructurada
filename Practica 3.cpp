#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c;
	
	printf("Introduzca un caracter \n");
	c=getchar();
	
	int a = (int) c;
	
	if(48<=a && a<=57)
	
		printf("Se introdujo un numero:");
	
	else
	
		if(65<=a && a<=90)
		   printf("Se introdujo una mayuscula:");
	
	     else
	
		    if(97<=a && a<=122)
		    printf("Se introdujo una minuscula:");
	
	         else
	
		        printf("Se introdujo un simbolo:");
putchar(c);	
return(0);
}
