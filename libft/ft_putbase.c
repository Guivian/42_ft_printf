/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarbosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:26:25 by lbarbosa          #+#    #+#             */
/*   Updated: 2022/02/24 20:42:56 by lbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putbase(unsigned long int n, char *base, unsigned int base_size)
{
	static int ret;

	ret = 0;
    if  (n >= base_size)
        ret += ft_putbase(n / base_size, base, base_size);
    ret += write(1, &base[n % base_size], 1);
	return (ret);
}
