#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include "./libft/libft.h"

int		ft_printf(const char *value, ...);
int	ft_select_params(const char value, va_list args);

#endif