/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarbosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:20:48 by lbarbosa          #+#    #+#             */
/*   Updated: 2022/02/18 20:39:52 by lbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	int		counter;

	counter = 0;
	va_start(args, format);
	counter = ft_printf_iteri(format, &args, counter);
	va_end(args);
	return (counter);
}
int	ft_printf_iteri(const char *format, va_list *args, int counter)
{
	int i;

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
				counter +=ft_printf_convert_u(va_arg(*args, unsigned int));
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
			counter += write(1, &format[counter], 1);
		i++;
	}
	return (counter);
}

int	main(void)
{
	int len;
	len = ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c",'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\n');
	printf("%i\n", len);
	len = ft_printf("%s", "Ola Mundo\n");
	printf("%i\n", len);
	len = ft_printf("%i%c", 100599, '\n');
	printf("%i\n", len);
	len = ft_printf("%d%c", -1999, '\n');
	printf("%i\n", len);
	len = ft_printf("%u\n", 100, '\n');
	printf("%i\n", len);
	len = ft_printf("%x%c", 5613, '\n');
	printf("%i\n", len);
	len = ft_printf("%X%c", 456456, '\n');
	printf("%i\n", len);
}
