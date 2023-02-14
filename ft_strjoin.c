/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescola- <pescola-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 05:38:33 by pescola-          #+#    #+#             */
/*   Updated: 2023/02/08 23:11:44 by pescola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	j;
	size_t	sj;
	char	*nwstr;

	if (!s1 || !s2)
		return (NULL);
	nwstr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!nwstr)
		return (NULL);
	sj = 0;
	j = 0;
	while (s1[j] != 0)
	{
		nwstr[j] = s1[j];
		j++;
	}
	while (s2[sj] != 0)
	{
		nwstr[j] = s2[sj];
		j++;
		sj++;
	}
	nwstr[j] = 0;
	return (nwstr);
}
