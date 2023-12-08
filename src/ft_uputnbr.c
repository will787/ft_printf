/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:14:31 by wivieira          #+#    #+#             */
/*   Updated: 2023/12/08 13:27:05 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_uputnbr(unsigned int n)
{
	char	*putnbr;
	int		lenput;

	putnbr = ft_utoa(n);
	lenput = ft_strlen(putnbr);
	ft_putstr_fd(putnbr, 1);
	free(putnbr);
	return (lenput);
}
