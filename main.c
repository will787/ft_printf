#include "printf.h"
#include <stdio.h>
int main(void)
{
	int c = 1000;
	int my = ft_printf("-->: %i\n", c);
	int origin = printf("-->: %i\n", c);


	printf("\n\n<-------------------------->\n\n");
	printf("resultado sua ft_printf: %i\n", my);
	printf("resultado printf original: %i\n", origin);
}
