#include "main.h"

/**
 * print_int - Print integer type
 * 
*/

int	print_int(va_list list, char *buffer, int flags, int width, int precision, int size)
{
	int	i = BUFF_SIZE - 2;
	int is_negative = 0;
	long int n = va_arg(list, long int);

	n = converte_size(n, size);/* converte the number */
	
}