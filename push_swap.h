/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 14:39:15 by ambombaa          #+#    #+#             */
/*   Updated: 2018/08/22 08:21:36 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX_INT 2147483647
# define MIN_INT -2147483648

# include "libft/libft.h"

typedef struct		s_stack
{
	int				value;
	struct s_stack	*next;
}					t_stack;

typedef enum		e_move
{
	sa,
	sb,
	ss,
	pa,
	pb,
	ra,
	rra,
	rb,
	rrb,
	rr,
	rrr,
	ok
}					t_move;

void				add_to_stack(t_stack **stack, int digit);
void				construct(t_stack **stack, char **argv);
int					check_arguments(char **argv);
void				free_stack(t_stack **stack);
void				instructions(t_stack **a, t_stack **b, char *args);
void				reverse_rotate(t_stack **stack);
void				rotate(t_stack **stack);
void				push(t_stack **stack_a, t_stack **stack_b);
void				swap(t_stack **stack);
void				swap_stacks(t_stack **stack_a, t_stack **stack_b);
void				rotate_stacks(t_stack **stack_a, t_stack **stack_b);
void				reverse_rotate_stacks(t_stack **stack_a, t_stack **stack_b);
long long			num_is_int(const char *str);
void				reverse(t_stack **stack);
t_move				sort_mini(t_stack **stack);
t_move				sort_min(t_stack **stack_a, t_stack **stack_b);
int					min(t_stack **stack);
int					max(t_stack **stack);
t_move				operation(int size, t_stack **s_a, t_stack **s_b);
int					check_sorting(t_stack *stack);
int					check_reverse_sorting(t_stack *stack);
void				check_duplicates(t_stack **stack);
t_stack				*lstend(t_stack *stack);
int					length(t_stack **stack);
int					get_pos(int n, t_stack **stack);

#endif
