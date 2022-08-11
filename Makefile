# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/07 18:44:21 by alfgarci          #+#    #+#              #
#    Updated: 2022/08/11 10:55:48 by alfgarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		src/ft_atoi.c \
			src/ft_bzero.c \
			src/ft_calloc.c \
			src/ft_isalnum.c \
			src/ft_isalpha.c \
			src/ft_isascii.c \
			src/ft_isdigit.c \
			src/ft_isprint.c \
			src/ft_itoa.c \
			src/ft_memchr.c \
			src/ft_memcmp.c \
			src/ft_memcpy.c \
			src/ft_memmove.c \
			src/ft_memset.c \
			src/ft_split.c \
			src/ft_strchr.c \
			src/ft_strdup.c \
			src/ft_strjoin.c \
			src/ft_strlcat.c \
			src/ft_strlcpy.c \
			src/ft_strlen.c \
			src/ft_strmapi.c \
			src/ft_strncmp.c \
			src/ft_strnstr.c \
			src/ft_strrchr.c \
			src/ft_substr.c \
			src/ft_tolower.c \
			src/ft_toupper.c

OBJS 	=	${SRCS:.c=.o}
	
INC 	=	includes/

CC	=	gcc -Wall -Wextra -Werror

NAME 	=	libft.a

.c.o:
	${CC} -c $< -o ${<:.c=.o} -I ${INC}

${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS}
		ranlib ${NAME}
	
all:		${NAME}

clean:
		rm -f ${OBJS}

fclean:		clean
		rm -f ${NAME}

re:		fclean all
