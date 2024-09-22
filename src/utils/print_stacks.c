/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:01:06 by abigamas          #+#    #+#             */
/*   Updated: 2024/09/22 12:44:02 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void print_stacks(t_stack *stack_a, t_stack *stack_b)
{
	ft_printf("==============================\n");
	ft_printf("A - B\n");
	while (stack_a || stack_b)
	{
		if (stack_a)
		{
			ft_printf("%d - ", stack_a->value);
			stack_a = stack_a->next;
		}
		else
			ft_printf("   - ");
		if (stack_b)
		{
			ft_printf("%d\n", stack_b->value);
			stack_b = stack_b->next;
		}
		else
			ft_printf(" \n");
	}
	ft_printf("==============================\n");
}
