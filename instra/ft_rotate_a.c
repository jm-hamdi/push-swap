/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:44:05 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/07 22:44:05 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_rotate_a(t_list **stack_a)
{
	t_list	*node;
	t_list	*current;

	node = NULL;
	current = NULL;
	if (*stack_a == NULL)
		return ;
	if ((*stack_a)->next == NULL)
		return ;
	node = *stack_a;
	*stack_a = (*stack_a)->next;
	current = *stack_a;
	current = ft_lstlast(current);
	current->next = node;
	node->next = NULL;
	write(1, "ra\n", 3);
}
