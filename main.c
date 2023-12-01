#include "printf.h"
#include "libft.h"

int main(void)
{
	char c = 'A';
	ft_printf("%c", c);
	printf("%c\n", c);
    return 0;

	char *str = "testando";
	ft_printf("minha printf: %s\n", str);
	printf("printf original: %s\n", str);
}
