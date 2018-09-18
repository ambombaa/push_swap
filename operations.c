/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 14:37:37 by ambombaa          #+#    #+#             */
/*   Updated: 2018/08/22 09:16:12 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		add_to_stack(t_stack **stack, int digit)
{
	t_stack *new_node;
	t_stack *last;

	new_node = ft_memalloc(sizeof(t_stack));
	last = *stack;
	new_node->value = digit;
	new_node->next = NULL;
	if (*stack == NULL)
	{
		*stack = new_node;
		return ;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return ;
}

void		construct(t_stack **stack, char **argv)
{
	while (*argv != NULL)
	{
		add_to_stack(stack, ft_atoi(*argv));
		argv++;
	}
	check_duplicates(stack);
}

int			check_arguments(char **argv)
{
	int			i;
	int			j;

	i = -1;
	while (argv[++i] != NULL)
	{
		if (num_is_int(argv[i]) > MAX_INT || num_is_int(argv[i]) < MIN_INT)
			return (0);
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '-' || argv[i][j] == '+')
				j++;
			if (!ft_isdigit(argv[i][j]))
				return (0);
			j++;
		}
	}
	return (1);
}

void		free_stack(t_stack **stack)
{
	t_stack		*temp;

	while (*stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
		temp = NULL;
	}
}

/*
** Searches for the lowest number on the stack and returns it.
*/

int			min(t_stack **stack)
{
	int			num;
	t_stack		*temp;

	temp = *stack;
	num = temp->value;
	while (temp->next)
	{
		temp = temp->next;
		if (temp->value < num)
			num = temp->value;
	}
	return (num);
}
