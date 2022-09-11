/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 23:51:16 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/08 23:51:17 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*next;
	t_list	*cur;

	cur = *lst;
	while (cur)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
}
