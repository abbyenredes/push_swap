/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:10:07 by abigamas          #+#    #+#             */
/*   Updated: 2024/09/22 12:52:03 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	swap(t_stack **stack)
{
	t_stack *a;
	t_stack *b;
	t_stack *c;

	a = *stack;
	b = (*stack)->next;
	c = (*stack)->next->next;

	*stack = b;
	b->next = a;
	a->next = c;
}

void	sa(t_stack **stack)
{
	swap(stack);
	ft_printf("sa\n");
}

void	sb(t_stack **stack)
{
	swap(stack);
	ft_printf("sb\n");
}
