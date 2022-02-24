# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbarbosa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/18 20:45:57 by lbarbosa          #+#    #+#              #
#    Updated: 2022/02/23 18:55:54 by lbarbosa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR =	libft

HEADER = ft_printf.h -L./libft -lft

C_SRC = ft_printf.c ft_printf_convert_c.c ft_printf_convert_s.c ft_printf_convert_di.c ft_printf_convert_u.c ft_printf_convert_p.c ft_printf_convert_x.c ft_printf_convert_mx.c

SRC_OBJ = $(C_SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC_OBJ)
	@make -C $(LIBFT_DIR)
	@cp libft/libft.a ./$(NAME)
	@ar rcs $(NAME) $(SRC_OBJ)
	@ranlib $(NAME)

.o.c:
	@$(CC) $(C_FLAGS) -I $(HEADER) -o $@ -c $<

clean:
	@rm -f *.o
	@make clean -C $(LIBFT_DIR)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
