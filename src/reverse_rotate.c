/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 20:12:40 by abigamas          #+#    #+#             */
/*   Updated: 2024/09/24 21:22:13 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void reverse_rotate(t_stack **stack)
{
    t_stack *beforelast;
    t_stack *last;
    
    if(!*stack || !(*stack)->next)
    return ;
    
}

void	rra(t_stack **stack_a)
{
    rotate(stack_a);
    ft_printf("rra\n");
}

void	rrb(t_stack **stack_b)
{
    rotate(stack_b);
    ft_printf("rrb\n");
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
    rotate(stack_a);
    rotate(stack_b);
    ft_printf("rrr\n");
}