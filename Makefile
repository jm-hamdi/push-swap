# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jm-hamdi <jm-hamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 23:52:18 by jm-hamdi          #+#    #+#              #
#    Updated: 2022/07/08 23:52:20 by jm-hamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
NAME_BONUS	= push_swap_bonus
CC		= gcc
RM		= rm -rf
CFLAGS	= -Wall -Wextra -Werror

HEADER	= ./push_swap.h

SRC		= ./push_swap.c ./ft_atoi.c ./ft_split2.c ./ft_split.c ./ft_check_error.c ./ft_before_last.c\
		./ft_lstnew.c ./ft_lstadd_back.c ./ft_lstsize.c ./ft_lstlast.c ./ft_lstadd_front.c ./ft_lstclear.c\
		./ft_strcmp.c ./ft_strdup.c ./ft_strjoin.c ./ft_strlen.c ./ft_if_sorted.c ./ft_position.c\
		./instra/ft_swap_b.c ./instra/ft_swap_all.c ./instra/ft_rotate_a.c ./ft_norm.c\
		./instra/ft_rotate_b.c ./instra/ft_rotate_all.c ./instra/ft_swap_a.c\
		./instra/ft_r_rotate_a.c ./instra/ft_r_rotate_b.c ./instra/ft_r_rotate_all.c ./instra/ft_push_a.c ./instra/ft_push_b.c\
		./ft_push_twenty.c ./ft_push_three.c ./ft_push_original.c ./ft_push_five.c ./ft_push_another.c\
		
		

#BONUS	= ./checker.c\
		./utils.c\
		./split.c\
		./lst.c\
		./checker.c\
		./checker_2.c\
		./free.c\
		./utils.c\
		./swap.c\
		./rotate.c\
		./reverse.c\
		./push.c\
		./string.c

M_OBJS = $(SRC:.c=.o)
#B_OBJS = $(BONUS:.c=.o)

all: $(NAME)
$(NAME): $(M_OBJS) #$(HEADER)
#	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	$(CC) $^ -o $@
#%.o : %.c push_swap.h
#	$(CC) $(CFLAGS) -c $< -o $@

#bonus: $(NAME_B)
#$(NAME_B): $(BONUS) $(HEADER)
#	$(CC) $(CFLAGS) $(BONUS) -o $(NAME_B)


clean:
	$(RM) $(M_OBJS) $(B_OBJS) 
fclean:
	$(RM) $(NAME_B) $(NAME)

re : fclean all

.PHONY: fclean clean all bonus checker push_swap