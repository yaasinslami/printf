/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _printf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:16:45 by yslami            #+#    #+#             */
/*   Updated: 2024/11/07 16:16:49 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_printf.h"

void	print_buffer(char *buffer, int *buff_index);

int	_printf(const char *format, ...)
{
	int	i = 0, printed_chars = 0, printed = 0;
	int	flags, precision, width, size, buff_index;

	if (!format)
		return (NULL);
	char	buffer[MAX_SIZE];//stored in the Stack
	va_list list;
	va_start(list, format);
	while (format[i] != NULL)
	{
		if (format[i] != '%')
		{
			buffer[buff_index++] = format[i];
			if (buff_index == MAX_SIZE)
				print_buffer(buffer, &buff_index);
			printed_chars++;
		}
		else//we found % so we should process what come after
		{
			print_buffer(buffer, &buff_index);
			flags = get_flags(format, &i);
			precision = get_precision(format, &i);
			width = get_width(format, &i);
			size = get_size(format, &i);
		}

	}
}

void	print_buffer(char *buffer, int *buff_index)
{
	if (*buff_index > 0)
		write(1, buffer, *buff_index);
	*buff_index = 0;
}
