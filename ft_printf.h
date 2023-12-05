/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:15:36 by wivieira          #+#    #+#             */
/*   Updated: 2023/12/05 19:42:32 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(const char *value, ...);
int		ft_select_params(const char value, va_list args);
int		ft_putnbr(int n);
char	*ft_utoa(unsigned int n);
int		ft_uputnbr(unsigned int n);
int ft_puthex_def(const char value, unsigned int n);
#endif
