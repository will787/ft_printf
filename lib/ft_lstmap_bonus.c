/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:45:16 by wivieira          #+#    #+#             */
/*   Updated: 2023/11/08 12:52:00 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*pl;
	t_list	*tmp;
	void	*ptv;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	pl = NULL;
	while (lst)
	{
		ptv = f(lst -> content);
		tmp = ft_lstnew(ptv);
		if (!tmp)
		{
			free(ptv);
			ft_lstclear(&pl, (*del));
			return (NULL);
		}
		ft_lstadd_back(&pl, tmp);
		lst = lst -> next;
	}
	return (pl);
}
