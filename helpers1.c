/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 14:36:54 by ambombaa          #+#    #+#             */
/*   Updated: 2018/08/17 14:36:57 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Performs simple stack operations for stacks that are of size 3 or less.
*/

t_move		sort_mini(t_stack **stack)
{
	if (check_sorting(*stack))
		return (ok);
	else if (check_reverse_sorting(*stack) || (*stack)->value == max(stack))
		return (ra);
	else if ((*stack)->next->value == min(stack))
		return (sa);
	else
		return (rra);
}

/*
** Performs a quicksort given the stack size is less than or equal to 10 digits.
*/

t_move		sort_min(t_stack **stack_a, t_stack **stack_b)
{
	int			len;

	len = length(stack_a);
	if (check_sorting(*stack_a) && *stack_b == NULL)
		return (ok);
	if (check_sorting(*stack_a) && check_reverse_sorting(*stack_b) && *stack_b)
		return (pa);
	if (len == 3)
	{
		if (sort_mini(stack_a) == ok)
			return (pa);
		else
			return (sort_mini(stack_a));
	}
	if ((*stack_a)->value > (*stack_a)->next->value &&
	(*stack_a)->next->value == min(stack_a))
		return (sa);
	if ((*stack_a)->value == min(stack_a))
		return (pb);
	else
		return (get_pos(min(stack_a), stack_a) <= (len / 2) ? ra : rra);
}

/*
** Determins which sorting function to apply based on the number of arguments
** given to the program.
*/

t_move		operation(int size, t_stack **s_a, t_stack **s_b)
{
	if (size == 2)
		return (check_sorting(*s_a) ? ok : sa);
	else if (size == 3)
		return (sort_mini(s_a));
	else
		return (sort_min(s_a, s_b));
}
