# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 13:53:50 by mbertin           #+#    #+#              #
#    Updated: 2022/04/13 14:35:02 by mbertin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
		ft_memset.c ft_split.c  ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlen.c ft_strncmp.c ft_strrchr.c \
		ft_strlcat.c ft_strlcpy.c ft_strmapi.c ft_strnstr.c ft_strtrim.c \
		ft_substr.c ft_tolower.c ft_toupper.c ft_striteri.c \

OBJS = ${SRCS:%c=%o}

NAME = libft.a

AR = ar rcs

CC = gcc

RM = rm -f

CFLAGS = -Wall -Werror -Wextra

${NAME}: ${OBJS} 
	${AR} ${NAME} ${OBJS}

all: ${NAME}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re