# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpatingr <gpatingr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/14 17:38:52 by gpatingr          #+#    #+#              #
#    Updated: 2020/05/29 22:38:30 by gpatingr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC= ft_atoi.c ft_bzero.c ft_calloc.c
SRC:= $(SRC) ft_isalnum.c ft_isalpha.c ft_isascii.c
SRC:= $(SRC) ft_isdigit.c ft_isprint.c ft_isspace.c
SRC:= $(SRC) ft_memccpy.c ft_memchr.c ft_memcmp.c
SRC:= $(SRC) ft_memcpy.c ft_memmove.c ft_memset.c
SRC:= $(SRC) ft_strchr.c ft_strdup.c ft_strjoin.c
SRC:= $(SRC) ft_strlcat.c ft_strlcpy.c ft_strlen.c
SRC:= $(SRC) ft_strncmp.c ft_strnstr.c ft_strrchr.c
SRC:= $(SRC) ft_strtrim.c ft_substr.c ft_tolower.c
SRC:= $(SRC) ft_toupper.c ft_itoa.c ft_strmapi.c
SRC:= $(SRC) ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRC:= $(SRC) ft_putstr_fd.c ft_split.c
SRC_BONUS= ft_lstnew.c ft_lstsize.c ft_lstlast.c
SRC_BONUS:= $(SRC_BONUS) ft_lstadd_front.c ft_lstadd_back.c
OBJ= $(SRC:.c=.o)
OBJ_BONUS= $(SRC_BONUS:.c=.o)
HEAD=libft.h
CC=gcc
CFLAGS= -Wall -Werror -Wextra -Iinclude
NAME=libft.a

all: $(NAME)

bonus: $(NAME) $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ_BONUS)

$(NAME): $(HEAD) $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -rf $(NAME)

.PHONY: all clean fclean re bonus