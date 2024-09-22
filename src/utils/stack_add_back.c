/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_add_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:59:41 by abigamas          #+#    #+#             */
/*   Updated: 2024/09/22 12:02:19 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	stack_add_back(t_stack **head, t_stack *node)
{
	t_stack *temp;

	//Comprobacion de si es null
	if (!*head)
	{
		*head = node;
		return ;
	}
	//Iteracion 2do paso
	temp = *head;
	while (temp->next)
		temp = temp->next;
	//Ultimo paso, agregar
	temp->next = node;
}
