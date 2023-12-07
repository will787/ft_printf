/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:45:35 by wivieira          #+#    #+#             */
/*   Updated: 2023/12/07 20:01:39 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int ft_lenhexpointer(unsigned long n)
{
	int lenhex;

	lenhex = 0;
	while(n != 0)
	{
		lenhex++;
		n /= 16;
	}
	return(lenhex);
}

void ft_puthex_formatpointer(const char value, unsigned long long n)
{
	const char *hexamin = "0123456789abcdef";

	if(n >= 16)
	{
		ft_puthex_formatpointer(value, n / 16);
		// if (value == 'x')
		// 	ft_putchar_fd(hexamin[n % 16], 1);
	}
	ft_putchar_fd(hexamin[n % 16], 1);
}

int ft_puthex_pointer(const char value,  unsigned long long n)
{
	if (n == 0)
		return(write(1, "0", 1));
	else
		ft_puthex_formatpointer(value, n);
	return (ft_lenhexpointer(n));
}