/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:44:17 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/07 22:44:17 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_swap_a(t_list **stack_a)
{
	int	tmp;

	if (*stack_a == NULL)
		return ;
	if ((*stack_a)->next == NULL)
		return ;
	tmp = (*stack_a)->position;
	(*stack_a)->position = (*stack_a)->next->position;
	(*stack_a)->next->position = tmp;
	write(1, "sa\n", 3);
}
