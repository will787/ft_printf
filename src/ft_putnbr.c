/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:26:47 by wivieira          #+#    #+#             */
/*   Updated: 2023/12/05 14:43:22 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr(int n)
{
	char	*putnbr;
	int		lenput;

	putnbr = ft_itoa(n);
	lenput = ft_strlen(putnbr);
	ft_putstr_fd(putnbr, 1);
	free(putnbr);
	return(lenput);
}