/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokatfi <mokatfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 09:34:11 by mokatfi           #+#    #+#             */
/*   Updated: 2024/12/23 08:14:39 by mokatfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	mnb3d(char piece, va_list ptr)
{
	int	i;

	i = 0;
	if (piece == 'c')
		return (ft_putchar(va_arg(ptr, int)));
	else if (piece == '%')
		return (ft_putchar('%'));
	else if (piece == 'd' || piece == 'i')
		return (ft_putnbr(va_arg(ptr, int)));
	else if (piece == 's')
		return (ft_putstr(va_arg(ptr, char *)));
	else if (piece == 'u')
		return (ft_putunsigned(va_arg(ptr, unsigned int)));
	else if (piece == 'x')
		return (ft_puthexa(va_arg(ptr, unsigned int), 'x'));
	else if (piece == 'X')
		return (ft_puthexa(va_arg(ptr, unsigned int), 'X'));
	else if (piece == 'p')
		return (ft_putptr(va_arg(ptr, unsigned long)));
	else
		i = ft_putchar('%') + ft_putchar(piece);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		l;
	va_list	ptr;

	if (!str)
		return (-1);
	va_start(ptr, str);
	i = 0;
	l = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] == '\0')
			return (-1);
		if (str[i] == '%')
		{
			i++;
			l += mnb3d(str[i], ptr);
		}
		else
			l += ft_putchar(str[i]);
		i++;
	}
	va_end(ptr);
	return (l);
}
