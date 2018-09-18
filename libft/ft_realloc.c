/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:14:27 by ambombaa          #+#    #+#             */
/*   Updated: 2018/08/17 15:14:30 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void *nptr;

	if (!ptr || !size)
		return (NULL);
	if (!(nptr = ft_strnew(size)))
		return (NULL);
	ft_strcpy(nptr, ptr);
	free(ptr);
	return (nptr);
}
