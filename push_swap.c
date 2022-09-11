/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:22:27 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/08 23:21:28 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_fillstack(t_list **stack, char **split)
{
	int		i;
	t_list	*n;

	i = 0;
	*stack = NULL;
	while (split[i])
	{
		n = ft_lstnew(ft_atoi(split[i]));
		ft_position(*stack, n);
		ft_lstadd_back(stack, n);
		i++;
	}
}

void	free_var(t_list *a, t_list *b, char **split, int ac)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		free(split[i]);
		i++;
	}
	free(split);
	ft_lstclear(&a);
	ft_lstclear(&b);
}

void	ft_check1(int *ac, char **av)
{
	int		i;

	i = 0;
	while (i < *ac)
	{
		if (av[i][0] == '\0')
		{
			write (1, "Error\n", 6);
			exit(0);
		}
		i++;
	}
}

void	ft_check2(int *ac, char **split)
{
	if (!ft_check_error(*ac, split))
	{
		write(1, "Error\n", 6);
		exit(0);
	}
}

int	main(int ac, char **av)
{
	char	**split;
	t_list	*a;
	t_list	*b;

	a = malloc(sizeof(t_list *));
	b = malloc(sizeof(t_list *));
	b = NULL;
	if (ac == 1)
		return (0);
	split = ft_split2(av);
	ft_check1(&ac, av);
	ft_check2(&ac, split);
	ft_fillstack(&a, split);
	if (ft_if_sorted(a) == 1)
		return (ft_lstclear(&a), 0);
	ft_norm(&a, &b);
	ft_push_original(&a, &b);
	free_var(a, b, split, ac);
	return (0);
}
