/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:44:14 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/07 22:44:14 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_rotate_b(t_list **stack_b)
{
	t_list	*node;
	t_list	*current;

	node = NULL;
	current = NULL;
	if (*stack_b == NULL)
		return ;
	if ((*stack_b)->next == NULL)
		return ;
	node = *stack_b;
	*stack_b = (*stack_b)->next;
	current = *stack_b;
	current = ft_lstlast(current);
	current->next = node;
	node->next = NULL;
	write(1, "rb\n", 3);
}
