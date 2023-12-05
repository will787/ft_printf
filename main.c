#include "printf.h"
#include <stdio.h>
int main(void)
{
	unsigned int c = -1;
	int my = ft_printf("-->: %x\n");
	int origin = printf("-->: %x\n");

	printf("\n\n<-------------------------->\n\n");
	printf("resultado sua ft_printf: %i\n", my);
	printf("resultado printf original: %i\n", origin);
}
