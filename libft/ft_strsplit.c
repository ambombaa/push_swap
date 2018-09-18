/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:28:36 by ambombaa          #+#    #+#             */
/*   Updated: 2018/08/17 15:28:41 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char		**str;
	int			wd;
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	wd = ft_wdcount(s, c);
	if ((str = (char **)ft_memalloc(sizeof(char *) * (wd + 1))) == 0)
		return (NULL);
	while (s[j])
	{
		if ((str[i] = ft_strnew(ft_wdlength(s + j, c))) == 0)
		{
			ft_strdel(str);
			return (NULL);
		}
		ft_wdcopy(str[i], s + j, c, &j);
		i++;
	}
	str[wd] = 0;
	return (str);
}
