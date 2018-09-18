/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:33:31 by ambombaa          #+#    #+#             */
/*   Updated: 2018/08/17 15:33:34 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	str = ft_strnew(ft_strlen(s));
	if (str == NULL)
		return (NULL);
	while (j < ft_strlen(s))
	{
		if (!i && (s[j] == ' ' || s[j] == '\t' || s[j] == '\n'))
			j++;
		else
			str[i++] = s[j++];
	}
	while (str[--i] == ' ' || str[i] == '\t' || str[i] == '\n')
		str[i] = '\0';
	return (str);
}
