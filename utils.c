#include "main.h"

/**
 * is_digit - check if a charachter is a digit
 * 
 * @c: the input char
 * 
 * Return: return 1 if @c is a digit, otherwise return 0
*/

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}