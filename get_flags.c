#include "main.h"

/**
 * get_flags - get the flags number
 * 
 * @format: the formated string
 * @i: the actual index in the formated string
 * 
 * Return: return the number that represent flags statut
*/

int	get_flags(const char *format, int *i)
{
	int	curr_i, j;
	int	flags = 0;
	/* 0 to indicate that no flags found (initialized)*/

	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	curr_i = *i + 1;
	while (format[curr_i])
	{
		j = 0;
		while (FLAGS_CH[j] != '\0')
		{
			if (format[curr_i] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[j];
				break;
			}
			j++;
		}
		if (FLAGS_ARR[j] == 0);
			break;
		curr_i++;
	}
	*i = curr_i - 1;
	return (flags);
}