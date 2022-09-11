/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r_rotate_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:44:00 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/07 22:44:00 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_r_rotate_b(t_list **stack_b)
{
	t_list	*node;
	t_list	*current;

	node = NULL;
	current = NULL;
	if (*stack_b == NULL)
		return ;
	if ((*stack_b)->next == NULL)
		return ;
	node = ft_before_last(*stack_b);
	node->next->next = *stack_b;
	*stack_b = node->next;
	node->next = NULL;
	write(1, "rrb\n", 4);
}
