# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcot <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/10 12:13:33 by gcot              #+#    #+#              #
#    Updated: 2023/02/16 11:58:12 by gcot             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
	ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_bzero.c \
	ft_toupper.c ft_tolower.c ft_atoi.c ft_calloc.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
	ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ = *.o

FLAGS = -Wall -Werror -Wextra

all :
	gcc $(FLAGS) -c $(SRC)
	ar -rc $(NAME) $(OBJ)

clean : 
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all

bonus :
	gcc $(FLAGS) -c $(BONUS) $(SRC)
	ar -rc $(NAME) $(OBJ)
