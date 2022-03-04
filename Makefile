# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user <user@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 16:20:11 by user              #+#    #+#              #
#    Updated: 2022/03/04 11:59:39 by user             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
	  ft_atoi.c ft_strncmp.c ft_strchr.c ft_strrchr.c ft_strlen.c ft_strlcat.c ft_strlcpy.c \
	  ft_strnstr.c ft_strdup.c ft_memcmp.c ft_memset.c ft_memcpy.c ft_memchr.c ft_memmove.c \
	  ft_bzero.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c \
	  ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
		ft_lstclear.c ft_lstiter.c ft_lstmap.c \

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ echo "compile library libft.a"
	@ ar rc $(NAME) $^
	@ rm *.o
	@ echo "done"

%.o : %.c 
	@ gcc -c $(FLAGS) $^ -I ./

bonus: $(OBJ) $(OBJ_BONUS)
	@ echo "compile library libft.a"
	@ ar rc $(NAME) $^
	@ rm *.o
	@ echo "done"

.PHONY: all bonus clean fclean re

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all