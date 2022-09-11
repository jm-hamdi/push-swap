/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r_rotate_all.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:43:56 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/07 22:43:56 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ft_r_rotate_all(t_list **stack_a, t_list **stack_b)
{
	ft_r_rotate_a(stack_a);
	ft_r_rotate_b(stack_b);
	write(1, "rrr\n", 4);
}
