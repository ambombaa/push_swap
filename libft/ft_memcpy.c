/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:07:30 by ambombaa          #+#    #+#             */
/*   Updated: 2018/08/17 15:07:37 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*str;
	const char	*str2;

	str = (char *)dst;
	str2 = (const char *)src;
	i = 0;
	if (n == 0)
		return (dst);
	while (i < n)
	{
		*str++ = *str2++;
		i++;
	}
	return (dst);
}
