/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:07:04 by abigamas          #+#    #+#             */
/*   Updated: 2024/11/14 16:10:26 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void    sorting_numbers(t_stack **stack_a, t_stack **stack_b)
{
	int len;

	//(void)stack_b;
	len = get_stack_size(stack_a);
	if (len == 2)
		order_two_num(stack_a);
	else if (len == 3)
		order_three_num(stack_a);
	else if (len == 4)
		order_four_num(stack_a, stack_b);
	else if (len == 5)
		order_five_num(stack_a, stack_b);
	else if (len > 5)
	{
		k_sort1(stack_a, stack_b, get_stack_size(*stack_a));
        k_sort2(stack_b, stack_b, get_stack_size(*stack_b));
    }   
	else
		ft_error(stack_a);
}