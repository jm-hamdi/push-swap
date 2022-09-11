/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:21:52 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/08 23:50:04 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_word(char const *s, char c)
{
	int	i;
	int	flage;
	int	cp;

	i = 0;
	flage = 0;
	cp = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c && flage == 0)
		{
			cp++;
			flage = 1;
		}
		else if (s[i] == c && flage == 1)
			flage = 0;
		i++;
	}
	return (cp);
}

int	ft_count_and_alloc(char *s, char c)
{
	int	i;
	int	cp;

	i = 0;
	cp = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i] != c && s[i])
	{
		i++;
		cp++;
	}
	return (cp);
}

int	ft_split_2(const char *s, char c, char **str, int i)
{
	int	j;
	int	k;

	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			k = 0;
			str[j] = (char *)malloc(ft_count_and_alloc((char *)&s[i], c) + 1);
			if (!str[j])
				return (j);
			while (k < ft_count_and_alloc((char *)&s[i], c))
			{
				str[j][k] = s[i + k];
				k++;
			}
			str[j++][k] = '\0';
			i += k;
		}
	}
	str[j] = NULL;
	return (-1);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	int		j;

	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * count_word(s, c) + 1);
	if (!str)
		return (NULL);
	j = ft_split_2(s, c, str, 0);
	if (j != -1)
	{
		while (j >= 0)
		{
			free(str[j]);
			j--;
		}
		free(str);
	}
	return (str);
}
