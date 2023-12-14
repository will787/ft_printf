/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:14:37 by wivieira          #+#    #+#             */
/*   Updated: 2023/12/04 15:11:47 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const*s, int c)
{
	char	cd;

	cd = (unsigned char) c;
	while (*s)
	{	
		if (*s == cd)
			return ((char *) s);
		s++;
	}
	if (c == '\0' || cd == '\0')
		return ((char *) s);
	return (0);
}
