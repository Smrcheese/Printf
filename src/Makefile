# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/15 20:24:25 by sezequie          #+#    #+#              #
#    Updated: 2023/10/16 19:10:55 by sezequie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

FILES	= ft_printf.c ft_numbers.c ft_words.c

OBJS	= $(FILES:.c=.o)

RM	= rm -f

CC	= cc

CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all