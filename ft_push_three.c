/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 23:51:59 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/08 23:51:59 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_three(t_list **stack_a, int start)
{
	if ((*stack_a)->position == start + 1
		&& (*stack_a)->next->position == start + 0)
	{
		ft_swap_a(stack_a);
	}
	else if ((*stack_a)->position == start + 2
		&& (*stack_a)->next->position == start + 0)
	{
		ft_rotate_a(stack_a);
	}
	else if ((*stack_a)->position == start + 1
		&& (*stack_a)->next->position == start + 2)
	{
		ft_r_rotate_a(stack_a);
	}
	if (ft_if_sorted(*stack_a) == 1)
		return ;
	ft_swap_a(stack_a);
	ft_push_three(stack_a, start);
}
