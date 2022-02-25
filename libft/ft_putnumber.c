/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarbosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:20:39 by lbarbosa          #+#    #+#             */
/*   Updated: 2022/02/25 19:59:48 by lbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_putnumber(int n)
{
    int	nbr;
	int	ret;

	ret = 0;
    if (n < 0)
    {
		write(1, "-", 1);
        (unsigned int)nbr = (unsigned int)n * -1;
    }
    else
        nbr = (int) n;
    if (nbr >= 10)
        ret += ft_putnumber(nbr / 10);
    ret += ft_write(nbr % 10 + '0');
	return(ret);
}
