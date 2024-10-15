/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:08:56 by abigamas          #+#    #+#             */
/*   Updated: 2024/10/11 20:09:19 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_repeated(t_stack *lst)
{
	t_stack		*current;
	t_stack		*checker;
	int			duplicates;

	duplicates = 0;
	current = lst;
	while (current && current->next)
	{
		checker = current->next;
		while (checker)
		{
			if (current->value == checker->value)
				duplicates = 1;
			checker = checker->next;
		}
		current = current->next;
	}
	return (duplicates);
}

int	is_ordered(t_stack *lst)
{
	if (!lst || !lst->next)
		return (1);
	if (lst->value > lst->next->value)
		return (0);
	return (is_ordered(lst->next));
}

int	check_list(t_stack *lst)
{
	if (is_repeated(lst))
		ft_error(&lst);
	if (is_ordered(lst))
	{
		free_stack(&lst);
		exit(0);
	}
	return (1);
}

void	ft_error(t_stack **lst)
{
	free_stack(lst);
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}
