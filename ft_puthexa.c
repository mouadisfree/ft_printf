/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokatfi <mokatfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 09:29:33 by mokatfi           #+#    #+#             */
/*   Updated: 2024/12/20 14:05:12 by mokatfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int n, char m)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i += ft_puthexa(n / 16, m);
		i += ft_puthexa(n % 16, m);
	}
	else if (m == 'x')
		i += write(1, &"0123456789abcdef"[n % 16], 1);
	else if (m == 'X')
		i += write(1, &"0123456789ABCDEF"[n % 16], 1);
	return (i);
}
