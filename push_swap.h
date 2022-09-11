/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:22:31 by jm-hamdi          #+#    #+#             */
/*   Updated: 2022/07/08 23:20:38 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list {
	int				data;
	int				position;
	struct s_list	*next;
}	t_list;

size_t	ft_strlen(char *str);
char	**ft_split2(char **av);
char	*ft_strdup(const char *str);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(const char *s, char c);
int		ft_atoi(const char *str);
int		ft_strcmp(const char *s1, const char *s2);
t_list	*ft_lstnew(int data);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst);
int		ft_check_error(int ac, char **av);
int		ft_if_sorted(t_list *stack_a);
void	ft_position(t_list *stack_a, t_list *node);
void	ft_swap_a(t_list **stack_a);
void	ft_swap_b(t_list **stack_b);
void	ft_swap_all(t_list **stack_a, t_list **stack_b);
void	ft_rotate_a(t_list **stack_a);
void	ft_rotate_b(t_list **stack_b);
void	ft_rotate_all(t_list **stack_a, t_list **stack_b);
void	ft_r_rotate_a(t_list **stack_a);
void	ft_r_rotate_b(t_list **stack_b);
void	ft_r_rotate_all(t_list **stack_a, t_list **stack_b);
void	ft_push_a(t_list **stack_a, t_list **stack_b);
void	ft_push_b(t_list **stack_a, t_list **stack_b);
void	ft_push_twenty(t_list **stack_a, t_list **stack_b, int max, int chunk);
void	ft_push_three(t_list **stack_a, int start);
void	ft_push_original(t_list **stack_a, t_list **stack_b);
void	ft_push_five(t_list **stack_a, t_list **stack_b);
void	ft_push_another(t_list **stack_a, t_list **stack_b, int div);
void	ft_norm(t_list **stack_a, t_list **stack_b);
t_list	*ft_before_last(t_list *stack);

#endif
