/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadec.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 00:06:50 by yslami            #+#    #+#             */
/*   Updated: 2024/11/18 15:15:42 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void	ft_print_hex(size_t num, const char format);

int	ft_put_hexadec(unsigned int n, char format)
{
	ft_print_hex((size_t)n, format);
	return (ft_nbrlen((size_t)n, 16));
}

int	ft_put_pointer(void *ptr)
{
	uintptr_t	n;

	n = (uintptr_t)ptr;
	write(1, "0x", 2);
	ft_print_hex((size_t)n, 'x');
	return (ft_nbrlen((size_t)n, 16) + 2);
}

static void	ft_print_hex(size_t num, char format)
{
	if (num >= 16)
	{
		ft_print_hex(num / 16, format);
		ft_print_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd(num + '0', 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd(num - 10 + 'a', 1);
			if (format == 'X')
				ft_putchar_fd(num - 10 + 'A', 1);
		}
	}
}
