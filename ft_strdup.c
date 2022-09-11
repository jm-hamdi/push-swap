/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:22:04 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/08 23:28:26 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *str)
{
	char	*s;
	char	*s2;
	size_t	len;
	int		i;

	s = (char *)str;
	len = ft_strlen(s);
	i = 0;
	s2 = (char *)malloc((len + 1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	while (s[i])
	{
	s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
