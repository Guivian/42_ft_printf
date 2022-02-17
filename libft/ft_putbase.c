/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarbosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:26:25 by lbarbosa          #+#    #+#             */
/*   Updated: 2022/02/17 21:39:48 by lbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putbase(unsigned int n, char *base, unsigned int base_size)
{
    if (n >= base_size)
        ft_putbase(n / base_size, base, base_size);
    write(1, &base[n % base_size], 1);
}
