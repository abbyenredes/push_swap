/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:21:56 by abigamas          #+#    #+#             */
/*   Updated: 2024/09/24 21:04:15 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	rotate(t_stack **stack)
{
    t_stack  *head;
    t_stack  *last;

    if (!*stack || !(*stack)->next)
        return ;
    head = *stack;
    last = *stack;
    while (last->next)
        last = last->next;
    *stack = (*stack)->next;
    last->next = head;
    head->next = NULL;
    
}

void	ra(t_stack **stack_a)
{
    rotate(stack_a);
    ft_printf("ra\n");
}

void	rb(t_stack **stack_b)
{
    rotate(stack_b);
    ft_printf("rb\n");
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
    rotate(stack_a);
    rotate(stack_b);
    ft_printf("rrr\n");
}