/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:55:00 by wivieira          #+#    #+#             */
/*   Updated: 2023/12/04 20:11:28 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_select_params(const char value, va_list args)
{
	if (value == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	
	return(0);
}
int	ft_printf(const char *value, ...)
{	
	va_list args;
	int i;
	int lenght;

	if(!value)
		return -1;
	va_start(args, value); 
	i = 0;
	while (value[i])
	{	
		if(value[i] == '%' && value[i + 1] == 'c')
		{	
			lenght = ft_select_params(value[i + 1],args);
			i++;
		}
		else
		{
			lenght = ft_putchar_fd(value[i], 1);
		}
		i++;
	}
	va_end(args);
	return();
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