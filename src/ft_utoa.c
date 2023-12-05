/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:12:40 by wivieira          #+#    #+#             */
/*   Updated: 2023/12/05 17:24:50 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_zeromalloc(void)
{
	char	*c;

	c = (char *) malloc(2 * sizeof(char));
	if (!c)
		return (NULL);
	c[0] = '0';
	c[1] = '\0';
	return (c);
}

static long int	ft_count(unsigned int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
	}
	while (n != 0)
	{	
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_utoa(unsigned int n)
{
	char			*c;
	int				i;
	unsigned int	nb;
	long int		len;

	nb = n;
	len = ft_count(nb) + 1;
	if (nb == 0)
		return (ft_zeromalloc());
	c = ft_calloc(len, 1);
	if (!c)
		return (NULL);
	if (n < 0)
	{
		c[0] = '-';
		nb *= -1;
	}
	i = len - 2;
	while (nb > 0)
	{
		c[i--] = (nb % 10) + 48;
		nb /= 10;
	}
	return (c);
}