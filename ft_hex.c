/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarbosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:46:50 by lbarbosa          #+#    #+#             */
/*   Updated: 2022/02/17 17:59:00 by lbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_puthex(int n)
{
	unsigned int	nbr;
	char *ptr;

	ptr = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		nbr = (unsigned int)n * -1;
	}
	else
		nbr = (unsigned int) n;
	if (nbr >= 16)
		ft_puthex(nbr / 16);
	write(1, &ptr[nbr % 16], 1);
}
