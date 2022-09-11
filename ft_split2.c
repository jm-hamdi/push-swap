/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:21:57 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/08 23:36:12 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_split2(char **av)
{
	char	*str;
	char	**split;
	int		i;

	i = 1;
	str = ft_strdup("");
	while (av[i])
	{
		str = ft_strjoin(ft_strjoin(str, av[i]), " ");
		i++;
	}
	split = ft_split(str, ' ');
	free(str);
	return (split);
}
