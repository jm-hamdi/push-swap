/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_norm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 23:50:28 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/09 00:51:35 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_norm(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size < 6)
		ft_push_five(stack_a, stack_b);
	else if (size < 200)
		ft_push_another(stack_a, stack_b, 5);
	else
		ft_push_another(stack_a, stack_b, 10);
}
