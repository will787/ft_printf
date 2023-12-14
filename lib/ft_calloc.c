/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:17:11 by wivieira          #+#    #+#             */
/*   Updated: 2023/10/25 18:54:50 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*pt;

	pt = malloc(nmemb * size);
	if (!pt)
		return (NULL);
	ft_bzero(pt, (nmemb * size));
	return (pt);
}
