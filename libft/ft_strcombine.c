/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcombine.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:17:07 by ambombaa          #+#    #+#             */
/*   Updated: 2018/08/17 15:17:13 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcombine(char *s1, char *c, char *s2)
{
	char *temp;

	temp = ft_strjoin(s1, c);
	temp = ft_strjoin(temp, s2);
	return (temp);
}
