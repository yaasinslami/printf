#include "main.h"

/**
 * get_precision - get the precision
 * 
 * @format: the formated string
 * @i: the actual index of @format
 * @list: list of arguments
 * 
 * Return: return the precision
*/

int	get_precision(const char *format, int *i, va_list list)
{
	int	curr_i = *i + 1, precision = -1;
	/* precision = -1 to indicate no precision found */

	if (format[curr_i] != '.')
	{
		return (precision);
	}

	precision = 0;
	curr_i++;
	while(format[curr_i])
	{
		if (is_digit(format[curr_i]))
		{
			precision *= 10;
			precision += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			precision = va_arg(list, int);
			curr_i++;
			break;
		}
		else
		{
			break;
		}
		curr_i++;
	}
	return (precision);
}