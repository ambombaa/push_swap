/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:25:16 by ambombaa          #+#    #+#             */
/*   Updated: 2018/08/17 15:25:20 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	char	*dest;

	i = -1;
	dest = dst;
	while (++i < len)
	{
		if (*src != '\0')
			*dst++ = *src++;
		else
			*dst++ = 0;
	}
	return (dest);
}
