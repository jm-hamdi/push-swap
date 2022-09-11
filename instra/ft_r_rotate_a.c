/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r_rotate_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:43:52 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/07 22:43:52 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_r_rotate_a(t_list **stack_a)
{
	t_list	*node;
	t_list	*current;

	node = NULL;
	current = NULL;
	if (*stack_a == NULL)
		return ;
	if ((*stack_a)->next == NULL)
		return ;
	node = ft_before_last(*stack_a);
	node->next->next = *stack_a;
	*stack_a = node->next;
	node->next = NULL;
	write(1, "rra\n", 4);
}
