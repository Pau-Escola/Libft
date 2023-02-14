/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescola- <pescola-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:53:00 by pescola-          #+#    #+#             */
/*   Updated: 2023/02/08 23:05:33 by pescola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	word_count(char const *s, char c)
{
	size_t	i;
	size_t	a;

	i = -1;
	a = 0;
	while (s[++i] != 0)
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			a++;
	}
	return (a);
}

char	**free_result(char **s, int col_num)
{
	int	i;

	i = 0;
	while (i < col_num)
		free(s[i++]);
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	start;
	int		pos;

	i = -1;
	pos = 0;
	start = 0;
	res = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!res)
		return (0);
	while (s[++i])
	{
		if (i > 0 && s[i] != c && s[i - 1] == c)
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			res[pos] = ft_substr(s, start, i - start + 1);
			if (!res[pos])
				return (free_result(res, pos));
			pos++;
		}
	}
	res[pos] = 0;
	return (res);
}
