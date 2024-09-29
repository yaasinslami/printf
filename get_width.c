#include "main.h"

/**
 * get_width - get the width an number
 * 
 * @format: the formated string
 * @i: the actual index in the formated string
 * @list: list of arguments
 * 
 * Return: return the width
*/

int	get_width(const char *format, int *i, va_list list)
{
	int	curr_i;
	int	width = 0;

	curr_i = *i + 1;
	/* e.g "%5d" */
	while (format[curr_i] != '\0')
	{
		if (is_digit(format[curr_i]))
		{
			width *= 10;
			width += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			width = va_arg(list, int);
			curr_i++;
			break;
		}
		else
			break;
		curr_i++;
	}
	*i = curr_i - 1;
	return (width);
}