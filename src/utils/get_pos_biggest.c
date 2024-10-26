/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pos_biggest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:46:16 by abigamas          #+#    #+#             */
/*   Updated: 2024/10/26 12:46:30 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	get_pos_biggest(t_stack *lst)
{
	int	max_val;
	int	pos;

	pos = 0;
	max_val = INT_MIN;
	while (lst)
	{
		if (lst->value > max_val)
			max_val = lst->value;
		lst = lst->next;
		pos++;
	}
	return (pos);
}