# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/07 17:00:59 by yeongo            #+#    #+#              #
#    Updated: 2022/07/14 20:20:01 by yeongo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AR		=	ar
ARFLAGS	=	rcus

CFLAGS	=	-Wall -Wextra -Werror -c

NAME	=	libft.a
SRCS1	=	ft_isalpha.c			\
			ft_isdigit.c			\
			ft_isalnum.c			\
			ft_isascii.c			\
			ft_isprint.c			\
			ft_strlen.c				\
			ft_memset.c				\
			ft_bzero.c				\
			ft_memcpy.c				\
			ft_memmove.c			\
			ft_strlcpy.c			\
			ft_strlcat.c			\
			ft_toupper.c			\
			ft_tolower.c			\
			ft_strchr.c				\
			ft_strrchr.c			\
			ft_strncmp.c			\
			ft_memchr.c				\
			ft_memcmp.c				\
			ft_strnstr.c			\
			ft_atoi.c				\
			ft_calloc.c				\
			ft_strdup.c				\
			ft_substr.c				\
			ft_strjoin.c			\
			ft_strtrim.c			\
			ft_split.c				\
			ft_itoa.c				\
			ft_strmapi.c			\
			ft_striteri.c			\
			ft_putchar_fd.c			\
			ft_putstr_fd.c			\
			ft_putendl_fd.c			\
			ft_putnbr_fd.c
SRCS2	=	ft_lstnew.c				\
			ft_lstadd_front.c		\
			ft_lstsize.c			\
			ft_lstlast.c			\
			ft_lstadd_back.c		\
			ft_lstdelone.c			\
			ft_lstclear.c			\
			ft_lstiter.c			\
			ft_lstmap.c
OBJS1	=	$(SRCS1:.c=.o)
OBJS2	=	$(SRCS2:.c=.o)

%.o		:	%.c
	$(CC) $(CFLAGS) -o $@ $<

ifdef WITH_BONUS
$(NAME)	:	$(OBJS1) $(OBJS2)
	$(AR) $(ARFLAGS) $@ $^
else
$(NAME)	:	$(OBJS1)
	$(AR) $(ARFLAGS) $@ $^
endif

.PHONY	:	all bonus clean fclean re
all		:	$(NAME)

bonus	:
	@make WITH_BONUS=1 all

clean	:
	rm -rf $(OBJS1) $(OBJS2)

fclean	:	clean
	rm -rf $(NAME)

re		:
	make fclean
	make all
