/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:51:33 by abigamas          #+#    #+#             */
/*   Updated: 2024/10/15 20:23:17 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//Crear array de ints
static int *create_array(t_stack *list, int	*size)
{
	t_stack *temp;
	int	*array;
	int	i;

	*size = get_stack_size(list);
	array = ft_calloc(*size, sizeof(int));
	if (!array)
	{
		free_stack(&list);
		exit(EXIT_FAILURE);
	}
	temp = list;
	i = 0;
	while (i < *size)
	{
		array[i++] = temp->value;
		temp = temp->next;
	}
	return(array);
}

void mini_bubble(int **array, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size)
	{
		j = (i + 1);
		while (j < size)
		{
			if ((*array)[i] > (*array)[j])
			{
				temp = (*array)[i];
				(*array)[i] = (*array)[j];
				(*array)[j] = temp;
				i = 0;
				break;
			}
			j++;
		}
		i++;
	}
}

void	add_index(t_stack **list)
{
	int	*array;
	int	size;
	//Crear array de ints
	array = create_array(*list, &size);

	printf("Antes\n");
	int i = 0;
	while (i < size)
	{
		printf("--> %d\n", array[i++]);
	}
	

	//Ordenamos array de ints
	mini_bubble(&array, size);

	
	printf("DEspues\n");
	i = 0;
	while (i < size)
	{
		printf("--> %d\n", array[i++]);
	}
	

	free(array);
}