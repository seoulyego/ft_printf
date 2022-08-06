# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/07 17:00:59 by yeongo            #+#    #+#              #
#    Updated: 2022/08/06 17:35:37 by yeongo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:=	cc
CFLAGS	:=	-Wall -Wextra -Werror

AR		:=	ar
ARFLAGS	:=	rcus

NAME	:=	libftprintf.a

SRCS	:=	ft_printf.c		\
			print_text.c	\
			print_number.c

OBJS	:=	$(SRCS:.c=.o)

all		:	$(NAME)

%.o		:	%.c
	$(CC) $(CFLAGS) -o $@ -c $^

$(NAME)	:	$(OBJS)
	$(AR) $(ARFLAGS) $@ $^

clean	:
	rm -f $(OBJS)

fclean	:	clean
	rm -f $(NAME)

re		:
	@make fclean
	@make all

.PHONY	:	all clean fclean re
