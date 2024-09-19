/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:27:48 by abigamas          #+#    #+#             */
/*   Updated: 2024/09/19 19:07:32 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

t_stack *stack_new(int value)
{
	t_stack *new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->next = NULL;
}

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
	while (temp)
		temp = temp->next;
	//Ultimo paso, agregar
	temp->next = node;
}

void	create_stack(t_stack **head, char **arguments)
{
	int	i;
	t_stack *node;

	i = 0;
	while (arguments[i])
	{
		node = stack_new(ft_atoi(arguments[i]));
		stack_add_back(head, node);
		i++;
	}
}

int main(int argc, char *argv[])
{
	t_stack *stack_a;
	t_stack *stack_b;
	t_stack stacksito;
	
	stack_a = &stacksito;
	
	stack_a = NULL;
	stack_b = NULL;
	if (argc <= 2)
		return (1);

	create_stack(&stack_a, argv);
	return 0;
}

/* 
int main(int argc, char const *argv[])
{
	int i;
	printf("Cant de argumentos --> %d\n", argc);

	i = 0;
	while (argv[i])
	{
		printf("Arg en la pos %d --> %s\n", i, argv[i]);
		i++;
	}
	
	return 0;
}
 */