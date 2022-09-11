/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 23:51:22 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/08 23:51:23 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	while (lst)
	{
		ptr = lst;
		lst = lst->next;
	}
	return (ptr);
}
