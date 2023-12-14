/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:26:39 by wivieira          #+#    #+#             */
/*   Updated: 2023/11/03 12:13:48 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{	
	size_t				i;
	const unsigned char	*s_one;
	const unsigned char	*s_two;

	s_two = (const unsigned char *) s2;
	s_one = (const unsigned char *) s1;
	i = 0;
	while ((s_one[i] != '\0' || s_two[i] != '\0') && i < n)
	{
		if (s_one[i] > s_two[i])
			return (1);
		if (s_one[i] < s_two[i])
			return (-1);
		i++;
	}	
	return (0);
}
