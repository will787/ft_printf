/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:44:23 by wivieira          #+#    #+#             */
/*   Updated: 2023/11/09 14:05:13 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*pl;
	t_list	*tmp;

	if (!lst || !f)
	{
		return ;
	}
	pl = lst;
	while (pl)
	{
		tmp = (pl -> next);
		(*f)(pl -> content);
		pl = tmp;
	}
}
