#include "ft_printf.h"
#include <stdio.h>
int main(void)
{
	// char * c ;
	// unsigned int cd = -1;
	// int my = ft_printf("-->: %p\n",  &cd);
	// int origin = printf("-->: %p\n", &cd);

	// printf("\n\n<-------------------------->\n\n");
	// printf("resultado sua ft_printf: %i\n", my);
	// printf("resultado printf original: %i\n", origin);

	char *string = "olamundo";

	printf("%#x\n", string);
	printf("%#X\n", string);
	printf("%#c\n", string);
	printf("%#s\n", string);
}
