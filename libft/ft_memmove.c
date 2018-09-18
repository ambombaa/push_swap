/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:09:06 by ambombaa          #+#    #+#             */
/*   Updated: 2018/08/17 15:09:09 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d_dst;
	unsigned char	*s_src;

	d_dst = (unsigned char *)dst;
	s_src = (unsigned char *)src;
	if (len == 0)
		return (dst);
	if (s_src < d_dst)
	{
		while (len)
		{
			d_dst[len - 1] = s_src[len - 1];
			len--;
		}
		return (dst);
	}
	else
	{
		ft_memcpy(dst, src, len);
		return (dst);
	}
}
