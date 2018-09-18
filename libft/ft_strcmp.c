/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:16:31 by ambombaa          #+#    #+#             */
/*   Updated: 2018/08/17 15:16:33 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = -1;
	while ((s2[++i]) && ((unsigned char)s1[i] == (unsigned char)s2[i]))
		continue;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
