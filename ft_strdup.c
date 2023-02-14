/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescola- <pescola-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:35:04 by pescola-          #+#    #+#             */
/*   Updated: 2023/02/08 22:25:41 by pescola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		size;
	int		i;

	size = ft_strlen(s1);
	i = 0;
	cpy = (char *)malloc (sizeof(char) * (size + 1));
	if (!cpy)
		return (0);
	ft_strlcpy(cpy, s1, size + 1);
	return (cpy);
}
