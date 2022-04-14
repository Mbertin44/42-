# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 13:53:50 by mbertin           #+#    #+#              #
#    Updated: 2022/03/31 14:19:25 by mbertin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c  

OBJS = ${SRCS:.c=.o}

NAME = libft.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Werror -Wextra

${NAME}: ${OBJS} 
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re