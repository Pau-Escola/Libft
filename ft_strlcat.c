/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescola- <pescola-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:06:49 by pescola-          #+#    #+#             */
/*   Updated: 2023/01/24 04:29:37 by pescola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;
	size_t	og_dst;

	i = 0;
	l = ft_strlen(dst);
	og_dst = ft_strlen(dst);
	if (dstsize < 1)
		return (ft_strlen(src) + dstsize);
	while ((i < ft_strlen(src)) && l < dstsize - 1)
	{
		dst[l] = src[i];
		i++;
		l++;
	}
	dst[l] = 0;
	if (ft_strlen(dst) > dstsize)
		return (ft_strlen(src) + dstsize);
	return (ft_strlen(src) + og_dst);
}
