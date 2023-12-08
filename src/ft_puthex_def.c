/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_def.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:53:40 by wivieira          #+#    #+#             */
/*   Updated: 2023/12/08 13:27:26 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_lenhex(unsigned int n)
{
	int	lenhex;

	lenhex = 0;
	while (n != 0)
	{
		lenhex++;
		n /= 16;
	}
	return (lenhex);
}

void	ft_puthex_format(const char value, unsigned int n)
{
	if (n >= 16)
	{
		ft_puthex_format(value, n / 16);
	}
	n = n % 16;
	if (n < 10)
		ft_putchar_fd(n + '0', 1);
	else
	{
		if (value == 'x')
			ft_putchar_fd((n - 10) + 'a', 1);
		else if (value == 'X')
			ft_putchar_fd((n - 10) + 'A', 1);
	}
}

int	ft_puthex_def(const char value, unsigned int n)
{
	if (n == 0)
		return (write(1, "0", 1));
	else
		ft_puthex_format(value, n);
	return (ft_lenhex(n));
}
