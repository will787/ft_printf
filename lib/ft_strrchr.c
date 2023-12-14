/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:29:19 by wivieira          #+#    #+#             */
/*   Updated: 2023/10/25 17:29:04 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*last;
	unsigned char	cd;

	cd = (unsigned char) c;
	last = NULL;
	while (*s)
	{
		if (*s == cd)
			last = s;
		if (*s == '\0')
		{
			return (NULL);
		}
		s++;
	}
	if (cd == '\0' || c == '\0')
		return ((char *) s);
	return ((char *) last);
}
