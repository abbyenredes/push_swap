/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:07:04 by abigamas          #+#    #+#             */
/*   Updated: 2024/09/25 20:06:09 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


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


void    sorting_numbers(t_stack **stack_a, t_stack **stack_b)
{
	int len;

	(void)stack_b;
	len = get_stack_size(*stack_a);
	if (len <= 3)
		order_three_num(stack_a);
}
