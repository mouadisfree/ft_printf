/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokatfi <mokatfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 09:35:16 by mokatfi           #+#    #+#             */
/*   Updated: 2024/12/21 15:06:05 by mokatfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_ptr(unsigned long n)
{
	int	i;

	i = 0;
	if (n >= 16)
		i += ft_hexa_ptr(n / 16);
	i += write(1, &"0123456789abcdef"[n % 16], 1);
	return (i);
}

int	ft_putptr(unsigned long n)
{
	int	l;

	if (n == 0)
		return (ft_putstr("(nil)"));
	l = ft_putstr("0x");
	l += ft_hexa_ptr(n);
	return (l);
}
