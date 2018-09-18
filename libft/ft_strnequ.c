/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:25:46 by ambombaa          #+#    #+#             */
/*   Updated: 2018/08/17 15:25:49 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int res;

	if (s1 == NULL || s2 == NULL)
		return (0);
	res = ft_strncmp(s1, s2, n);
	if (res < 0 || res > 0)
		return (0);
	else
		return (1);
}
