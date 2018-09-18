/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:27:59 by ambombaa          #+#    #+#             */
/*   Updated: 2018/08/17 15:28:01 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int len;

	i = 0;
	len = (int)ft_strlen(s);
	while (len >= i)
	{
		if (c == s[len])
			return ((char *)s + len);
		if (c == 0)
			return (0);
		len--;
	}
	return (0);
}
