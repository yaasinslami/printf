/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:19:04 by yslami            #+#    #+#             */
/*   Updated: 2024/11/19 10:19:11 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void	ft_parsing(const char *format, va_list list, int *count);
static int	ft_print_arg(va_list list, char format);
static int	is_specifier(int c);

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		count;

	count = 0;
	va_start(list, format);
	ft_parsing(format, list, &count);
	va_end(list);
	return (count);
}

static void	ft_parsing(const char *format, va_list list, int *count)
{
	size_t	i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (is_specifier(format[i + 1]))
			{
				*count += ft_print_arg(list, format[i + 1]);
				i++;
			}
		}
		else
			*count += ft_putchar_fd(format[i], 1);
		i++;
	}
}

static int	is_specifier(int c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'i' || c == 'd' || \
		c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

static int	ft_print_arg(va_list list, char format)
{
	if (format == '%')
		return (ft_putchar_fd('%', 1));
	else if (format == 'c')
		return (ft_putchar_fd(va_arg(list, int), 1));
	else if (format == 's')
		return (ft_putstr(va_arg(list, char *)));
	else if (format == 'p')
		return (ft_put_pointer(va_arg(list, void *)));
	else if (format == 'i' || format == 'd')
		return (ft_putnb(va_arg(list, int)));
	else if (format == 'u')
		return (ft_put_unsigned(va_arg(list, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_put_hexadec(va_arg(list, unsigned int), format));
	return (0);
}
