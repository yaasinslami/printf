#include "main.h"

/**
 * _printf - function that produces the behavior of printf function
 * @format: formated string
 * Return: return the printed chars
*/

int _printf(const char *format, ...)
{
	int	i, printed = 0, printed_chars = 0;
	int	flags, width, precision, size, buff_ind = 0;
	char buffer[BUFF_SIZE];

	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);
	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buff(buffer, &buff_ind);
			printed_chars++;
		}
		else
		{
			print_buff(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, list, buffer, flags, width, precision, size);
			/* handle the cases here */
		}
		i++;
	}
}

void	print_buff(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
	{
		write(1, &buffer[0], 1);
	}

	*buff_ind = 0;
}
