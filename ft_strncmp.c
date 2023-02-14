/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescola- <pescola-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:03:18 by pescola-          #+#    #+#             */
/*   Updated: 2023/02/09 00:22:22 by pescola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				res;

	i = 0;
	res = 0;
	while (i != n && !(s1[i] == 0 && s2[i] == 0))
	{
		res = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
		if (res != 0)
			return (res);
		i++;
	}
	return (res);
}
