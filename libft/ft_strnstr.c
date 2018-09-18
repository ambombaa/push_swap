/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:27:01 by ambombaa          #+#    #+#             */
/*   Updated: 2018/08/17 15:27:14 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t a;
	size_t b;
	size_t c;

	if (*little == '\0')
		return ((char *)big);
	a = ft_strlen(little);
	b = 0;
	while (big[b])
	{
		c = 0;
		while ((little[c] == big[c + b]) && ((c + b) < len))
		{
			if (c == a - 1)
				return ((char *)(big + b));
			c++;
		}
		b++;
	}
	return (NULL);
}
