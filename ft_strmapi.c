/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescola- <pescola-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:02:28 by pescola-          #+#    #+#             */
/*   Updated: 2023/02/08 22:59:50 by pescola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rslt;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	rslt = malloc (sizeof(char) * (len + 1));
	if (!rslt)
		return (NULL);
	i = 0;
	while (i < len)
	{
		rslt[i] = f((unsigned int)i, s[i]);
		i++;
	}
	rslt[i] = '\0';
	return (rslt);
}
