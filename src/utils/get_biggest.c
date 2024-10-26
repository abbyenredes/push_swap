/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_biggest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:44:32 by abigamas          #+#    #+#             */
/*   Updated: 2024/10/26 12:44:58 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	get_biggest(t_stack *lst)
{
	int	max_val;

	max_val = INT_MIN;
	while (lst)
	{
		if (lst->value > max_val)
			max_val = lst->value;
		lst = lst->next;
	}
	return (max_val);
}