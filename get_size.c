#include "main.h"

/**
 * get_size - get the size
 * 
 * @format: the formated string
 * @i: the index in the actual @format
 * 
 * Return: return the size
*/

int	get_size(const char *format, int *i)
{
	int	curr_i = *i + 1;
	int	size = 0;

	if (format[curr_i] == 'l')
	{
		size = S_LONG;
	}
	else if (format[curr_i] == 'h')
	{
		size = S_SHORT;
	}

	if (size)
		*i = curr_i;
	else
		*i = curr_i - 1;

	return (size);
}