/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_before_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 23:50:54 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/09 00:42:18 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_list	*ft_before_last(t_list *stack)
{
	t_list	*prev;

	if (stack == NULL)
		return (stack);
	prev = stack;
	while (stack->next)
	{
		prev = stack;
		stack = stack->next;
	}
	return (prev);
}
