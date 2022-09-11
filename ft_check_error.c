/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:21:35 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/09 00:08:22 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (1);
	return (0);
}

int	ft_isnbr(char *av)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(av);
	if (av[i] == '-' || av[i] == '+')
	{
		i = 1;
		if (len == 1)
			return (0);
	}
	while (i < len)
	{
		if (!ft_isdigit(av[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_isint(char *num, char *max, char *min)
{
	if (ft_strlen(num) >= 10)
	{
		if (num[0] == '-' && ft_strlen(num) >= 11 && ft_isnbr(num))
		{
			if (ft_strcmp(num, min) > 0)
				return (0);
		}
		if (num[0] == '+' && ft_strlen(num) >= 11 && ft_isnbr(num))
		{
			if (ft_strcmp(&num[1], max) > 0)
				return (0);
		}
		else if (ft_strlen(num) >= 10 && ft_isnbr(num))
		{
			if (ft_strcmp(num, max) > 0)
				return (0);
		}
	}
	return (1);
}

int	ft_check(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		if (!ft_isint(av[i], "2147483647", "-2147483648"))
			return (0);
		i++;
	}
	i = 0;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_error(int ac, char **av)
{
	int	i;

	(void)ac;
	i = 0;
	if (!ft_check(av))
		return (0);
	return (1);
}
// #include<stdio.h>
// int main(int ac,char **av) {
//     // Write C code here
// //    char **p;
// //    p = (char **)malloc (sizeof(char)*5 );
// //    p[0]="65";
//     //printf("%d\n",5452);
//     //printf("%d\n",ft_isdigit('7'));
//    //printf("%d\n",ft_check(p));
//     printf("%d",ft_check_error(ac,av));
//     return 0;
// }
