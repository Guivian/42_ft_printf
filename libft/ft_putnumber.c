/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarbosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:20:39 by lbarbosa          #+#    #+#             */
/*   Updated: 2022/03/01 16:47:46 by lbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnumber(int n)
{
	int	ret;

	ret = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		ret += write(1, "-", 1);
		n *= -1;
	}
	if (n >= 10)
		ret += ft_putnumber(n / 10);
	ret += ft_write(n % 10 + '0');
	return (ret);
}
