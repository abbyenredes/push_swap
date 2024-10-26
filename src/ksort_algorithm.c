/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort_algorithm.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:51:59 by abigamas          #+#    #+#             */
/*   Updated: 2024/10/26 14:42:30 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"



void	ksort(t_stack *stack_a, t_stack *stack_b)
{
	int		pivot;
	int		movements;
	long	max;

	pivot = ft_sqrt(get_stack_size(stack_a));
	movements = 0;
	pass_to_b(stack_a, pivot, &movements);
	while (stack_b != NULL)
	{
		max = find_max(stack_b);
		pass_to_a(stack_a, max);
	}
}

void	pass_to_a(t_stack *stack_a, t_stack *stack_b, int max)
{
	int	weight;

	weight = get_weight(stack_b, max);
	if (weight == 1)
		swap(&(stack_b), 'b', 'y');
	else if (weight > 1)
	{
		while (weight > 0)
		{
			rotate(&(stack_b), 'b', 'y');
			weight--;
		}
	}
	else if (weight < 0)
	{
		while (weight < 0)
		{
			reverse_rotate(&(stack_b), 'b', 'y');
			weight++;
		}
	}
	push(&(stack_b), &(stack_a), 'a');
}