/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:30:26 by ambombaa          #+#    #+#             */
/*   Updated: 2018/08/17 15:30:29 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int a;
	int b;
	int c;

	a = 0;
	b = -1;
	c = 0;
	while (little[a])
		a++;
	if (a == 0)
		return ((char *)big);
	while (big[++b])
	{
		while (little[c] == big[c + b])
		{
			if (c == a - 1)
				return ((char *)big + b);
			c++;
		}
		c = 0;
	}
	return (NULL);
}
