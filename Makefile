# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abait-ta <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 12:37:57 by abait-ta          #+#    #+#              #
#    Update: 2022/10/18 20:31:09 by abait-ta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_itoa.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memset.c \
		ft_memmove.c ft_split.c ft_striteri.c\
		ft_strchr.c ft_strdup.c  ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
		ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
        ft_tolower.c ft_toupper.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \


CC = cc

FLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:%.c=%.o}

NAME = libft.a

RM = rm -f

all: $(NAME)

$(NAME): ${OBJS}
	ar rcs $@ ${OBJS}

%.o: %.c libft.h
	${CC} ${FLAGS} -o $@ -c $<

clean:
	${RM} $(OBJS)

fclean: clean
		${RM} ${NAME}
re: fclean all
.PHONY : clean all fclean re
