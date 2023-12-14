/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:09:24 by wivieira          #+#    #+#             */
/*   Updated: 2023/11/03 11:53:17 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_srchparams(char const *s, char c)
{
	size_t	srch;
	size_t	i;

	srch = 0;
	i = 0;
	if (*s == '\0')
		return (0);
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i])
	{
		srch++;
		while (s[i] != c && s[i])
				i++;
		while (s[i] == c && s[i])
			i++;
	}
	return (srch);
}

void	ft_free_memory(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

char	*ft_extract_word(char const **s, char c)
{
	const char	*start;

	start = *s;
	while (**s != c && **s)
		(*s)++;
	return (ft_substr(start, 0, *s - start));
}

char	**ft_split(char const *s, char c)
{
	char		**arrspt;
	const char	*start;
	size_t		i;

	arrspt = (char **)malloc((ft_srchparams(s, c) + 1) * sizeof(char *));
	if (arrspt == NULL)
		return (NULL);
	arrspt[ft_srchparams(s, c)] = NULL;
	i = -1;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			start = s;
			arrspt[++i] = ft_extract_word(&s, c);
			if (arrspt[i] == NULL)
			{
				ft_free_memory (arrspt);
				return (NULL);
			}
		}
	}
	return (arrspt);
}
