/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:06:48 by wivieira          #+#    #+#             */
/*   Updated: 2023/11/08 18:10:11 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
	{
		return ((char *) big);
	}
	if (ft_strlen(little) > ft_strlen(big))
		return (0);
	j = 0;
	while (big[j] && j < len)
	{
		i = 0;
		while (little[i] != '\0' && big[j + i] == little[i])
		{
			i++;
		}
		if (little[i] == '\0' && (i + j) <= len)
			return ((char *)(big + j));
		j++;
	}
	return (0);
}
