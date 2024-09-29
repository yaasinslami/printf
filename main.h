#ifndef MAIN_H
# define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

#define BUFF_SIZE 1024

/**
 * struct fmt - Struct op
 * 
 * @fmt: the format
 * @fn: function associated
*/
typedef struct fmt
{

	char *fmt;
	(*fn)(va_list, char *, int, int, int, int);
} fmt_t;

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 1
#define S_SHORT 2

int	_printf(const char *, ...);

/* get_flags - get_width - get_precisoon */
int	get_flags(const char *, int *);
int	get_width(const char *, int *, va_list);
int	get_precision(const char *, int *, va_list);
int	get_size(const char *, int *);

/* handle_print */
int	handle_print(const char *fmt, int *ind, va_list list, char buffer[],
	int flags, int width, int precision, int size);

int	is_digit(char);

#endif
