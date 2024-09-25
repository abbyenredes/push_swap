/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_it_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:47:16 by abigamas          #+#    #+#             */
/*   Updated: 2024/09/25 19:33:13 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* 
It returns true when the list is order
and false if is not
 */
int is_it_order(t_stack *stack)
{
    while (stack)
    {
        if (stack->next && stack->value > stack->next->value)
            return (0);        
        stack = stack->next;
    }
    return (1);
}
