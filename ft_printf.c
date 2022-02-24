/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarbosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:20:48 by lbarbosa          #+#    #+#             */
/*   Updated: 2022/02/23 20:52:12 by lbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		counter;

	counter = 0;
	va_start(args, format);
	counter = ft_printf_iteri(format, &args, counter);
	va_end(args);
	return (counter);
}

int	ft_printf_iteri(const char *format, va_list *args, int counter)
{
	int	i;

	i = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				counter += ft_printf_convert_c(va_arg(*args, int));
			else if (format[i] == 's')
				counter += ft_printf_convert_s(va_arg(*args, char*));
			else if (format[i] == 'p')
				counter += ft_printf_convert_p(va_arg(*args, long));
			else if (format[i] == 'd')
				counter += ft_printf_convert_di(va_arg(*args, int));
			else if (format[i] == 'i')
				counter += ft_printf_convert_di(va_arg(*args, int));
			else if (format[i] == 'u')
				counter += ft_printf_convert_u(va_arg(*args, unsigned int));
			else if (format[i] == 'x')
				counter += ft_printf_convert_x(va_arg(*args, long));
			else if (format[i] == 'X')
				counter = ft_printf_convert_mx(va_arg(*args, long));
			else if (format[i] == '%')
			{
				counter += 1;
				write(1, "%", 1);
			}
		}
		else
			counter += write(1, &format[i], 1);
		i++;
	}
	return (counter);
}

/*int	main(void)
{
	ft_printf(" %x ", 0);
	ft_printf(" %x ", 1);
	ft_printf(" %x ", -1);
	ft_printf(" %x ", 1);
	ft_printf(" %x ", 9);
	ft_printf(" %x ", 10);
	ft_printf(" %x ", 11);
	ft_printf(" %x ", 15);
	ft_printf(" %x ", 16);
	ft_printf(" %x ", 17);
	ft_printf(" %x ", 99);
	ft_printf(" %x ", 100);
	ft_printf(" %x ", 101);
	ft_printf(" %x ", -9);
	ft_printf(" %x ", -10);
	ft_printf(" %x ", -11);
	ft_printf(" %x ", -14);
	ft_printf(" %x ", -15);
	ft_printf(" %x ", -16);
	ft_printf(" %x ", -99);
	ft_printf(" %x ", -100);
	ft_printf(" %x ", -101);
	ft_printf(" %x ", 42);
	ft_printf(" %x ", -42);
}*/
