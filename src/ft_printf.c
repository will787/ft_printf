/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:55:00 by wivieira          #+#    #+#             */
/*   Updated: 2023/12/01 18:41:22 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/printf.h"
#include "./includes/libft.h"

int	ft_printf(const char *value, ...)
{	
	va_list args;
	
	if(!value)
		return -1;

	va_start(args, value);
	int i; 
	i = 0;
	while (value[i])
	{
		if(value[i] == '%' && value[i + 1] == 'c')
		{
			ft_putchar_fd(32, 1);
			char c = va_arg(args, int);
			ft_putchar_fd(c, 1);	
			i++;
		}
		else if(value[i] == '%' && value[i + 1] == 'i')
		{
			ft_putchar_fd(32, 1);
			int i = va_arg(args, int);
			ft_putnbr_fd(i, 1);
		}
		else
		{
			ft_putchar_fd(value[i], 1);
		}
		i++;
	}
	va_end(args);
	return(i);
}

int main(void)
{
	char c = 'A';
	ft_printf("%c", c);
	printf("%c\n", c);
    return 0;
}


// - char
// - string
// - ponteiro
// - inteiro
// - decimal - mesma coisa com inteiro
// - unsigned
// - x - minúsculo
// - X - maiúsuclo
// - % porcentagem sinal

// va_arg retorna o argumento atual
// os outros não retorna valor nenhum