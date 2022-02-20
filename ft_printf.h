/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarbosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:19:21 by lbarbosa          #+#    #+#             */
/*   Updated: 2022/02/20 18:34:27 by lbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_printf_iteri(const char *format, va_list *args, int counter);
int	ft_printf_convert_c(char c);
int	ft_printf_convert_s(char *s);
int	ft_printf_convert_p(long p);
int	ft_printf_convert_di(int di);
int	ft_printf_convert_u(unsigned int u);
int	ft_printf_convert_x(long x);
int ft_printf_convert_mx(long mx);

#endif
