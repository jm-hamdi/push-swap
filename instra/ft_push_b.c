/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:43:47 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/07 22:43:47 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*current;

	current = NULL;
	if (*stack_a == NULL)
		return ;
	current = *stack_a;
	*stack_a = ((*stack_a)->next);
	current->next = *stack_b;
	*stack_b = current;
	write(1, "pb\n", 3);
}
