/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:13:26 by wivieira          #+#    #+#             */
/*   Updated: 2023/11/08 18:08:54 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{	
	size_t	lendest;
	size_t	lensrc;

	lendest = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (!size || lendest >= size)
	{
		return (size + lensrc);
	}
	if (size - lendest > lensrc)
	{	
		ft_memcpy(dst + lendest, src, lensrc + 1);
	}
	else
	{
		ft_memcpy(dst + lendest, src, size - lendest - 1);
		dst[size - 1] = '\0';
	}
	return (lendest + lensrc);
}
