/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:06:33 by wivieira          #+#    #+#             */
/*   Updated: 2023/12/07 20:06:01 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putpointer(const char value, long long n)
{
	int prefix;
	int putlen;
	
	unsigned long long nb = (unsigned long long)n;
	
	if(n == 0)
		return(write(1, "(nil)", 5));

	prefix = write(1, "0x", 2);
	putlen = ft_puthex_pointer(value, nb);
	return(prefix + putlen);
}
