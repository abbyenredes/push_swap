/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_smallest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:42:00 by abigamas          #+#    #+#             */
/*   Updated: 2024/10/26 12:42:54 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	get_smallest(t_stack *lst)
{
	int	min_val;

	min_val = INT_MAX;
	while (lst)
	{
		if (lst->value < min_val)
			min_val = lst->value;
		lst = lst->next;
	}
	return (min_val);
}
