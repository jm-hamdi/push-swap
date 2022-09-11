/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_if_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:46:29 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/08 23:59:55 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_if_sorted(t_list *stack_a)
{
	t_list	*current;
	int		i;
	int		last;

	i = 0;
	last = stack_a->position;
	if (stack_a == NULL)
		return (0);
	current = stack_a;
	while (current != NULL)
	{
		if (last > current->position)
			return (0);
		last = current->position;
		i++;
		current = current->next;
	}
	return (1);
}
