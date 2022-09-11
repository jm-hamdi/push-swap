/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_twenty.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 23:52:06 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/08 23:52:06 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_twenty(t_list **stack_a, t_list **stack_b, int max, int chunk)
{
	int	i;
	int	half;

	half = chunk / 2;
	i = 0;
	while (*stack_a && i < chunk)
	{
		if ((*stack_a)->position <= max)
		{
			if ((*stack_a)->position <= max - half)
				ft_push_b(stack_a, stack_b);
			else
			{
				ft_push_b(stack_a, stack_b);
				ft_rotate_b(stack_b);
			}
			i++;
		}
		else
			ft_rotate_a(stack_a);
	}
}
