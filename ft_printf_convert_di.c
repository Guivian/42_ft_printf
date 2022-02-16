/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_convert_i.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarbosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:27:00 by lbarbosa          #+#    #+#             */
/*   Updated: 2022/02/13 18:21:50 by lbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_convert_di(int di)
{
	return(write(1, ft_itoa(di), ft_strlen(ft_itoa(di))));
}
