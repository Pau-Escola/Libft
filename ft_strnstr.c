/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescola- <pescola-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:46:02 by pescola-          #+#    #+#             */
/*   Updated: 2023/02/09 00:09:58 by pescola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	if (len >= ft_strlen(haystack))
		len = ft_strlen(haystack);
	if (*needle == 0)
		return ((char *)haystack);
	while (i < len)
	{
		w = 0;
		if (haystack[i] == needle[w])
		{
			while (haystack[i + w] == needle[w] && i + w < len)
			{
				w++;
			}
			if (needle[w] == '\0')
				return (&((char *)haystack)[i]);
		}
		i++;
	}
	return (0);
}
