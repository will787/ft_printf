/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:55:00 by wivieira          #+#    #+#             */
/*   Updated: 2023/11/30 19:08:36 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>
#include <stdarg.h>

int	ft_printf(const char *value, ...)
{	
	va_list args;
	
	if(!value)
		return 0;

	va_start(args, value);
	int i; 
	i = 0;
	while (value[i])
	{
		if(value[i] == '%' && value[i + 1] == 'c')
		{
			char c = va_arg(args, int);
			putchar(c);	
		}
		i++;
	}
	va_end(args);
}

int main(void)
{
	int	a;
	int	b;
	char p = 'w';
	ft_printf("minha printf:%c", p);
	printf("\n");
	printf("printf original: %c", p);
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