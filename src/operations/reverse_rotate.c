/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 20:12:40 by abigamas          #+#    #+#             */
/*   Updated: 2024/09/25 18:35:48 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	reverse_rotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*beforelast;
	t_stack	*last;
	int		size;
	int		i;

	if (!*stack || !(*stack)->next)
		return ;
	head = *stack;
	beforelast = *stack;
	size = get_stack_size(*stack);
	i = 0;
	while (i < size - 2)
	{
		beforelast = beforelast->next;
		i++;
	}
	last = beforelast->next;
	beforelast->next = NULL;
	last->next = head;
	*stack = last;
}

void	rra(t_stack **stack_a)
{
	reverse_rotate(stack_a);
	ft_printf("rra\n");
}

void	rrb(t_stack **stack_b)
{
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_printf("rrr\n");
}
