/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:57:06 by abigamas          #+#    #+#             */
/*   Updated: 2024/09/22 11:57:42 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* 
It creates a stack of list desde char **arguments
 */
void	create_stack(t_stack **head, char **arguments)
{
	int	i;
	t_stack *node;

	i = 1;
	while (arguments[i])
	{
		node = stack_new(ft_atoi(arguments[i]));
		stack_add_back(head, node);
		i++;
	}
}
