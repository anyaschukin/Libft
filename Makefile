# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aschukin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/15 17:33:54 by aschukin          #+#    #+#              #
#    Updated: 2017/11/15 18:25:32 by aschukin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = Brew/*.c
CMP = *.o

NAME = libft.a

FLAGS = -Wextra -Werror -Wall

all : $(NAME)

$(NAME) :
	gcc -c $(FLAGS) $(SRCS) -I Brew/libft.h
	ar rc $(CMP)
	ranlib

clean :
	rm -rf $(CMP)

fclean : clean
	rm -rf $(NAME)

re : fclean all
