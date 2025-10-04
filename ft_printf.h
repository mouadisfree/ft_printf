/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokatfi <mokatfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 09:28:30 by mokatfi           #+#    #+#             */
/*   Updated: 2024/12/20 09:12:42 by mokatfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_putunsigned(unsigned int n);
int	ft_printf(const char *str, ...);
int	ft_puthexa(unsigned int n, char m);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putptr(unsigned long n);
int	ft_putnbr(int n);
int	ft_printf(const char *str, ...);

#endif