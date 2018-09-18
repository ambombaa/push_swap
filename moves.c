/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 14:37:24 by ambombaa          #+#    #+#             */
/*   Updated: 2018/08/17 14:37:27 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Returns the index position of a number in a stack.
*/

int			get_pos(int n, t_stack **stack)
{
	t_stack		*temp;
	int			i;

	i = 0;
	temp = *stack;
	while (temp)
	{
		if (temp->value == n)
			break ;
		temp = temp->next;
		i++;
	}
	return (i);
}
