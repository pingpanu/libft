# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user <user@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 16:20:11 by user              #+#    #+#              #
#    Updated: 2022/02/21 16:24:42 by user             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
	  ft_atoi.c ft_strncmp.c ft_strchr.c ft_strrchr.c ft_strlen.c ft_strlcat.c ft_strlcpy.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@ echo "convert *.c to *.o"
	@ gcc -c $(FLAGS) $(SRC) -I ./
	@ echo "done"
	@ echo "compile library libft.a"
	@ ar rc $(NAME) $(OBJ)
	@ rm *.o
	@ echo "done"

.PHONY: all bonus clean fclean re

clear:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all