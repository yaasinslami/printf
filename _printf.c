#include "_printf.h"

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
		if (format[i] == '%')
		{

		}
		else
		{
			
		}
	}
	}
}
