/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:20:23 by abigamas          #+#    #+#             */
/*   Updated: 2024/10/26 12:26:53 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int ft_sqrt(int num)
{
    int result;
    int i;

    i = 0;
    while (i * i < num)
    {
        result = i;
        i++;
    }
    return (result);
}
