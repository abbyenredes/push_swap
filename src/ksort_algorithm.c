/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort_algorithm.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:51:59 by abigamas          #+#    #+#             */
/*   Updated: 2024/11/14 17:51:15 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	k_sort1(t_stack **stack_a, t_stack **stack_b, int length)
{
	int	i;
	int	range;

	i = 0;
	range = ft_sqrt(length) * 7 / 5;
	while ((*stack_a))
	{
		if ((*stack_a)->index <= i)
		{
			pb(stack_a, stack_b);
			printf("----> entre");
			if (get_stack_size(*stack_b) > 1)
				rb(stack_b);
			i++;
		}
		else if ((*stack_a)->index <= i + range)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
			ra(stack_a); 

	}
}

void	k_sort2(t_stack **stack_a, t_stack **stack_b, int length)
{
	int	rb_count;
	int	rrb_count;

	while (length - 1 >= 0)
	{
		rb_count = count_r(*stack_b, length - 1);
		rrb_count = length - rb_count;
		if (rb_count <= rrb_count)
		{
			while ((*stack_b)->index != length - 1)
				rb(stack_b);
			pa(stack_a, stack_b);
			length--;
		}
		else
		{
			ft_printf("-----ingrese en else---");
			while ((*stack_b)->index != length - 1)
			{
				rrb(stack_b);
				ft_printf("-----ingrese en while---");
					
			}
			pa(stack_b, stack_a);
			length--;
		}
	}
}

int	count_r(t_stack *stack, int index)
{
	int	counter;

	counter = 0;
	while (stack && stack->index != index)
	{
		stack = stack->next;
		counter++;
	}
	return (counter);
}