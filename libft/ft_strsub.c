/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:31:03 by ambombaa          #+#    #+#             */
/*   Updated: 2018/08/17 15:31:06 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (s == NULL || (start + len) > ft_strlen(s))
		return (NULL);
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	return (ft_strncpy(str, s + start, len));
}
