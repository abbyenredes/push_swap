/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:25:03 by abigamas          #+#    #+#             */
/*   Updated: 2024/09/22 13:11:47 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void push(t_stack **source, t_stack **dest)
{
    t_stack *ha; //header A
    t_stack *hb; //Header B

    if (!*source)
        return ;
    ha = *source;
    hb = *dest;

    *source = (*source)->next;
    *dest = ha;
    ha->next = hb;
}

void    pa(t_stack **source, t_stack **dest)
{
    push(source, dest);
    ft_printf("pa\n");
}

void    pb(t_stack **source, t_stack **dest)
{
    push(source, dest);
    ft_printf("pb\n");
}
