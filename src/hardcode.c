/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hardcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:04:51 by abigamas          #+#    #+#             */
/*   Updated: 2024/10/15 14:39:59 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	get_smallest(t_stack *lst)
{
	int	min_val;

	min_val = INT_MAX;
	while (lst)
	{
		if (lst->value < min_val)
			min_val = lst->value;
		lst = lst->next;
	}
	return (min_val);
}
void	order_two_num(t_stack **stack)
{
	sa(stack);
}

void    order_three_num(t_stack **stack)
{
	int a;
	int b;
	int	c;

	while (!is_it_order(*stack))
	{
		a = (*stack)->value;
		b = (*stack)->next->value;
		c = (*stack)->next->next->value;
		if ((a > c) && (b > c)  && (a < b))
			rra(stack);
		else if ((a > b && a < c) || (a < b && c < b) || (a > b && a > c && b > c))
			sa(stack);
		else if ((a > b) && (a > c) && (b < c))
			ra(stack);
	}
}
void	order_four_num(t_stack **lst, t_stack **b)
{
	int	min;

	min = get_smallest(*lst);
	while ((*lst)->value != min)
		ra(lst);
	pb(lst, b);
	order_three_num(lst);
	pa(lst, b);
}

void	order_five_num(t_stack **lst, t_stack **b)
{
	int	min;

	min = get_smallest(*lst);
	if (stack_last(*lst)->value == min)
		rra(lst);
	else
	{
		while ((*lst)->value != min)
			ra(lst);
	}
	pb(lst, b);
	order_four_num(lst, b);
	pa(lst, b);
}