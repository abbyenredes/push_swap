/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:40:34 by abigamas          #+#    #+#             */
/*   Updated: 2024/10/15 20:18:22 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../Libft/libft.h"

typedef struct s_stack
{
	int	value;
	int	index;
	struct s_stack *next;
} t_stack ;

//SRC
void	create_stack(t_stack **head, char **arguments);
void    sorting_numbers(t_stack **stack_a, t_stack **stack_b);
void 	add_index(t_stack **stack);

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

//Hardcode
int	get_smallest(t_stack *lst);
void	order_two_num(t_stack **stack);
void    order_three_num(t_stack **stack);
void	order_four_num(t_stack **lst, t_stack **b);
void	order_five_num(t_stack **lst, t_stack **b);

//Parse
int		is_repeated(t_stack *lst);
int		is_ordered(t_stack *lst);
int		check_list(t_stack *lst);
void	ft_error(t_stack **lst);
void	check_digits(char **argv);


//UTILS
void	free_stack(t_stack **stack);
void	print_stacks(t_stack *stack_a, t_stack *stack_b);
void	stack_add_back(t_stack **head, t_stack *node);
t_stack *stack_new(int value);
int		get_stack_size(t_stack *stack);
int		is_it_order(t_stack *stack);
void	ft_free(char **str);
t_stack	*stack_last(t_stack *lst);


#endif