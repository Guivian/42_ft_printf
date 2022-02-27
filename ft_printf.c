/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarbosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:20:48 by lbarbosa          #+#    #+#             */
/*   Updated: 2022/02/27 19:28:12 by lbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		counter;
	int		i;

	counter = 0;
	i = -1;
	va_start(args, format);
	counter = ft_printf_iteri(format, &args, counter, i);
	va_end(args);
	return (counter);
}

int	ft_printf_iteri(const char *format, va_list *args, int counter, int i)
{
	while (format && format[++i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				counter += ft_printf_c(va_arg(*args, int));
			else if (format[i] == 's')
				counter += ft_printf_s(va_arg(*args, char*));
			else if (format[i] == 'p')
				counter += ft_printf_p(va_arg(*args, unsigned long int));
			else if (format[i] == 'd')
				counter += ft_printf_di(va_arg(*args, int));
			else if (format[i] == 'i')
				counter += ft_printf_di(va_arg(*args, int));
			else if (format[i] == 'u')
				counter += ft_printf_u(va_arg(*args, unsigned int));
			else if (format[i] == 'x')
				counter += ft_printf_x(va_arg(*args, long));
			else if (format[i] == 'X')
				counter += ft_printf_mx(va_arg(*args, long));
			else if (format[i] == '%')
				counter += write(1, "%", 1);
		}
		else
			counter += write(1, &format[i], 1);
	}
	return (counter);
}

/*int	main(void)
{
	int len = 0;
	int	len1 = 0;
	len = ft_printf(" %d len = %d ", 0123456754321513561325, len);
	len1 = printf("\n %d len = %d ", -2, len1);
}*/
