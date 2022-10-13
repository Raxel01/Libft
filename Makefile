# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 09:11:29 by abait-ta          #+#    #+#              #
#    Updated: 2022/10/13 16:49:38 by abait-ta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_atoi.o ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isdigit.o ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memset.c \
		ft_split.c ft_isdigit.c \
		ft_strchr.c ft_strdup.c  ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
		ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
		ft_tolower.c ft_toupper.c 

CC = gcc

FLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:%.c=%.o}

NAME = libft.a

RM = rm -f

${NAME}: ${OBJS}
	ar rcs $@ ${OBJS}

all: ${NAME}

%.o: %.c libft.h
	gcc -Wall -Wextra -Werror -o $@ -c $<

bonus : $(bonus_obj) libft.h
	ar rcs $(NAME) $^
clean:
	rm -f $(OBJS)

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY : clean all fclean re
