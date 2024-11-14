/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:57:02 by abigamas          #+#    #+#             */
/*   Updated: 2024/11/14 16:08:29 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int get_stack_size(t_stack **stack)
{
    int len;

    len = 0;
    while (stack)
    {
        len++;
        stack = (*stack)->next;
    }
    return (len);
}
