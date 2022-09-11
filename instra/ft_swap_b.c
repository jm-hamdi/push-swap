/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:44:26 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/07 22:44:26 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_swap_b(t_list **stack_b)
{
	int	tmp;

	if (*stack_b == NULL)
		return ;
	if ((*stack_b)->next == NULL)
		return ;
	tmp = (*stack_b)->data;
	(*stack_b)->data = (*stack_b)->next->data;
	(*stack_b)->next->data = tmp;
	write(1, "sb\n", 3);
}
