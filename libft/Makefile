# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbarbosa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/21 18:16:01 by lbarbosa          #+#    #+#              #
#    Updated: 2021/11/11 20:49:23 by lbarbosa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

C_SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRC_OBJ = $(C_SRC:.c=.o)

C_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJ = $(C_BONUS:.c=.o)

CC = gcc

CFlAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC_OBJ)
	@ar rcs $(NAME) $(SRC_OBJ)

bonus: $(NAME) $(SRC_OBJ) $(BONUS_OBJ)
	@ar rcs $(NAME) $(SRC_OBJ) $(BONUS_OBJ)

clean:
	@rm -f *.o

fclean : clean
	@rm -f $(NAME)

re : fclean all
