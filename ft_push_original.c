/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_original.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 23:51:52 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/08 23:51:52 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_by_pos(t_list *stack_b, int pos)
{
	int	i;

	i = 0;
	while (stack_b)
	{
		if (stack_b->position == pos)
			return (i);
		i++;
		stack_b = stack_b->next;
	}
	return (-1);
}

int	ft_dis(t_list *stack, int pos)
{
	if (pos < (ft_lstsize(stack) - pos))
		return (pos);
	return ((ft_lstsize(stack) - pos));
}

void	push_to(t_list **stack_b, int pos, int i)
{
	if (i < ft_lstsize(*stack_b) / 2)
		while ((*stack_b)->position != pos)
			ft_rotate_b(stack_b);
	else
		while ((*stack_b)->position != pos)
			ft_r_rotate_b(stack_b);
}

void	push(t_list **stack_a, t_list **stack_b, int *pos, int j)
{
	int	i;

	push_to(stack_b, *pos - 1, j);
	ft_push_a(stack_a, stack_b);
	i = find_by_pos(*stack_b, *pos);
	push_to(stack_b, *pos, i);
	(*pos)--;
	ft_push_a(stack_a, stack_b);
	ft_swap_a(stack_a);
}

void	ft_push_original(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	j;
	int	pos;

	pos = ft_lstsize(*stack_b);
	while (pos > 0)
	{
		pos--;
		i = find_by_pos(*stack_b, pos);
		j = find_by_pos(*stack_b, pos - 1);
		if (pos == 0 || ft_dis(*stack_b, i) < ft_dis(*stack_b, j))
		{
			push_to(stack_b, pos, i);
			ft_push_a(stack_a, stack_b);
		}
		else
			push(stack_a, stack_b, &pos, j);
	}
}
