/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:43:37 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/07 22:43:37 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_push_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*node;

	node = NULL;
	if (*stack_b == NULL)
		return ;
	if ((*stack_b)->next != NULL)
		node = (*stack_b)->next;
	(*stack_b)->next = *stack_a;
	*stack_a = *stack_b;
	*stack_b = node;
	write(1, "pa\n", 3);
}
