/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:27:48 by abigamas          #+#    #+#             */
/*   Updated: 2024/10/26 12:16:45 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main(int argc, char *argv[])
{
	t_stack *stack_a;
	t_stack *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	
	if (argc < 2)
		ft_error(&stack_a);
	create_stack(&stack_a, argv);
	// add_index(&stack_a);
	if (check_list(stack_a))
		
	print_stacks(stack_a, stack_b);

	sorting_numbers(&stack_a, &stack_b);
	
	print_stacks(stack_a, stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return EXIT_SUCCESS;
}

/* int main(int argc, char *argv[])
{
	t_stack *stack_a;
	t_stack *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc <= 2)
		return (1);
	create_stack(&stack_a, argv);
	print_stacks(stack_a, stack_b);
	
	rra(&stack_a);
	print_stacks(stack_a, stack_b);

	ra(&stack_a);
	print_stacks(stack_a, stack_b);
	

	free_stack(&stack_a);
	free_stack(&stack_b);
	return 0;
} */

/* int main(int argc, char *argv[])
{
	t_stack *stack_a;
	t_stack *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc <= 2)
		return (1);
	create_stack(&stack_a, argv);
	print_stacks(stack_a, stack_b);
	
	pb(&stack_a, &stack_b);
	print_stacks(stack_a, stack_b);
	sa(&stack_a);
	print_stacks(stack_a, stack_b);
	pb(&stack_a, &stack_b);
	print_stacks(stack_a, stack_b);
	sa(&stack_a);
	print_stacks(stack_a, stack_b);
	pa(&stack_b, &stack_a);
	print_stacks(stack_a, stack_b);
	pa(&stack_b, &stack_a);

	print_stacks(stack_a, stack_b);

	free_stack(&stack_a);
	free_stack(&stack_b);
	return 0;
} */

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