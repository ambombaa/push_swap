/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 14:59:01 by ambombaa          #+#    #+#             */
/*   Updated: 2018/08/17 14:59:03 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	ft_docheck(long long num)
{
	int len;

	len = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char				*ft_itoa(int n)
{
	char		*str;
	long long	nbr;
	int			len;
	int			sign;

	sign = (n >= 0) ? 0 : 1;
	nbr = (sign == 1) ? (long long)-n : (long long)n;
	len = (sign == 1) ? ft_docheck(nbr) + 1 : ft_docheck(nbr);
	if ((str = ft_strnew(len)) == 0)
		return (0);
	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (sign == 1)
		str[0] = '-';
	str[len + 1] = '\0';
	while (len-- > sign)
	{
		str[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}
