/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescola- <pescola-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:37:34 by pescola-          #+#    #+#             */
/*   Updated: 2023/02/08 23:54:19 by pescola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	intlen(long n)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}

size_t	put_number(long n, char *res, size_t i)
{
	if (n < 0)
	{
		n *= -1;
		res[0] = '-';
		i++;
	}
	if (n > 9)
	{
		i = put_number(n / 10, res, i);
		n = n % 10;
	}
	if (n < 10)
	{
		res[i] = n + '0';
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	t;

	t = intlen(n);
	res = malloc(sizeof(char) * (t + 1));
	if (!res)
		return (NULL);
	t = put_number(n, res, 0);
	res[t] = 0;
	return (res);
}
