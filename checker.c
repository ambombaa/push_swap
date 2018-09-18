/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 14:36:24 by ambombaa          #+#    #+#             */
/*   Updated: 2018/08/27 15:32:49 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_free_stack(t_stack *stack)
{
	t_stack *tmp;

	while (stack)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
}

void		run_checker(t_stack **stack, char **argv)
{
	t_stack		*stack_b;
	char		*args;

	stack_b = NULL;
	if (check_arguments(argv) == 0)
	{
		ft_putstr("Error\n");
		exit(0);
	}
	construct(stack, argv);
	while (get_next_line(0, &args) > 0)
	{
		instructions(stack, &stack_b, args);
		free(args);
	}
	check_sorting(*stack) ? ft_putstr("OK\n") : ft_putstr("KO\n");
	ft_free_stack(stack_b);
}

/*
** Main method - CHECKER.
*/

int			main(int argc, char **argv)
{
	t_stack		*stack;

	stack = NULL;
	if (argc > 1)
	{
		if (argc != 2)
			++argv;
		else
		{
			if (ft_wdcount(argv[1], ' ') == 1)
			{
				if (check_arguments(&argv[1]) == 0)
					ft_putstr("Error\n");
				return (0);
			}
			argv = ft_strsplit(argv[1], ' ');
		}
		run_checker(&stack, argv);
	}
	ft_free_stack(stack);
	return (0);
}
