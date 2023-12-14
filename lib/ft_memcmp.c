/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:33:27 by wivieira          #+#    #+#             */
/*   Updated: 2023/10/25 19:40:59 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s, const void *s2, size_t n)
{
	char unsigned	*s1;
	char unsigned	*s_t;
	size_t			i;

	i = 0;
	s1 = (unsigned char *) s;
	s_t = (unsigned char *) s2;
	while (i < n)
	{
		if (s1[i] > s_t[i])
			return (1);
		if (s1[i] < s_t[i])
			return (-1);
		i++;
	}
	return (0);
}
