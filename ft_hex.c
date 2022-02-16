/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarbosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:23:24 by lbarbosa          #+#    #+#             */
/*   Updated: 2022/02/16 17:11:36 by lbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puthex_fd(int n, int fd)
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
		ft_puthex_fd(nbr / 16, fd);
	write(1, &ptr[nbr % 16], 1);
}

int	main(void)
{
	ft_puthex_fd(1545654, 1);
}
