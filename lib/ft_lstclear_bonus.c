/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:52:49 by wivieira          #+#    #+#             */
/*   Updated: 2023/11/08 12:56:08 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*pl;
	t_list	*tmp;

	if (lst == NULL || del == NULL)
	{
		return ;
	}
	pl = *lst;
	while (pl)
	{
		tmp = pl -> next;
		(*del)(pl -> content);
		free(pl);
		pl = tmp;
	}
	*lst = NULL;
}
