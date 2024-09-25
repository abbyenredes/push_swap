/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:40:34 by abigamas          #+#    #+#             */
/*   Updated: 2024/09/25 19:32:59 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../Libft/libft.h"

typedef struct s_stack
{
	int	value;
	struct s_stack *next;
} t_stack ;

//SRC
void	create_stack(t_stack **head, char **arguments);
void    sorting_numbers(t_stack **stack_a, t_stack **stack_b);


//Operations
void    sa(t_stack **stack);
void    sb(t_stack **stack);
void    pa(t_stack **source, t_stack **dest);
void    pb(t_stack **source, t_stack **dest);
void	ra(t_stack **stack);
void	rb(t_stack **stack);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);


//UTILS
void	free_stack(t_stack **stack);
void	print_stacks(t_stack *stack_a, t_stack *stack_b);
void	stack_add_back(t_stack **head, t_stack *node);
t_stack *stack_new(int value);
int		get_stack_size(t_stack *stack);
int		is_it_order(t_stack *stack);


#endif