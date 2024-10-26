/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_digits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:19:32 by abigamas          #+#    #+#             */
/*   Updated: 2024/10/26 15:57:20 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_digits(char **argv)
{
	int	i;
	int	j;

	i = 0;


	while (argv[i])
	{
		
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != '-' && argv[i][j] != '+' && !ft_isdigit(argv[i][j]))
				ft_error(NULL);
			else if ((argv[i][j] == '-' || argv[i][j] == '+') && !ft_isdigit(argv[i][j + 1]))
				ft_error(NULL);	
			else if (argv[i][j + 1] == '-' || argv[i][j + 1] == '+')
				ft_error(NULL);
			j++;
			
		}
		i++;
	}
}