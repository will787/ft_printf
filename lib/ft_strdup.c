/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:31:11 by wivieira          #+#    #+#             */
/*   Updated: 2023/10/25 18:56:04 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s2)
{
	size_t	size;
	char	*copy;

	size = ft_strlen(s2);
	copy = malloc(size + 1);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s2, size);
	copy[size] = '\0';
	return (copy);
}
