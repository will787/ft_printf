#include "ft_printf.h"
#include <stdio.h>
int main(void)
{
	char * c ;
	char * cd = 15;
	int my = ft_printf("-->: %p %p\n",  c, cd);
	int origin = printf("-->: %p %p\n", c, cd);

	printf("\n\n<-------------------------->\n\n");
	printf("resultado sua ft_printf: %i\n", my);
	printf("resultado printf original: %i\n", origin);
}
