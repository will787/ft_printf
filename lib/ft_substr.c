/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:13:21 by wivieira          #+#    #+#             */
/*   Updated: 2023/11/08 18:08:22 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*pt;
	size_t	i;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if ((len + start) >= ft_strlen(s))
		len = ft_strlen(s) - start;
	pt = malloc (sizeof(char) * (len + 1));
	if (!pt)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		pt[i] = s[start];
		i++;
		start++;
	}
	pt[i] = '\0';
	return (pt);
}
