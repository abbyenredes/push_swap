/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:57:06 by abigamas          #+#    #+#             */
/*   Updated: 2024/10/15 18:58:32 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* 
It creates a stack of list desde char **arguments
 */

void check_limits(char *arguments, t_stack **head)
{
	if (ft_atoi(arguments) != ft_atoll(arguments))
		ft_error(head);
}

void	create_stack(t_stack **head, char **arguments)
{
	int	i;
	int	j;
	char	**split_args;
	t_stack *node;

	j = 1;
	while (arguments[j])
	{
		split_args = ft_split(arguments[j], ' ');
		if (!split_args)
			return ;
		i = 0;
		while (split_args[i])
		{
			check_digits(split_args);
			check_limits(split_args[i], head);
			node = stack_new(ft_atoi(split_args[i]));
			stack_add_back(head, node);
			i++;
		}
		ft_free(split_args);
		j++;
	}
}
