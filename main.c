#include "printf.h"
#include <stdio.h>
int main(void)
{
	char c = 'A';
	int my = ft_printf("my ft_printf -->: %c\n", c);
	int origin = printf("original printf -->: %c\n", c);


	printf("\n\n<-------------------------->\n\n");
	printf("resultado sua ft_printf: %i\n", my);
	printf("resultado printf original: %i\n", origin);
}
