# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbarbosa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/18 20:45:57 by lbarbosa          #+#    #+#              #
#    Updated: 2022/02/18 20:56:23 by lbarbosa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = ft_printf.a

C_SRC = ft_printf.c ft_printf_convert_c.c ft_printf_convert_s.c ft_printf_convert_p.c ft_printf_convert_di.c ft_printf_convert_u.c ft_printf_convert_x.c ft_printf_convert_mx.c

SRC_OBJ = $(C_SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC_OBJ)
	@make libft/.
	@ar rcs $(NAME) $(SRC_OBJ) libft/libft.a

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
