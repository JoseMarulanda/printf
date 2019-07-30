#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <stddef.h>
/**
 * _printf - recreates the printf function
 * @format: string with format specifier
 * Return: number of characters printed
 */
int _printf(const char * format, ...)
{
	int i, p = 0;
	int (*m)(va_list);
	va_list args;

	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			m = get_func(format[i + 1]);
			p = m(args);
			i += 2;
		}
		_putchar(format[i]);
		i++;
	}
	_putchar('\n');
	va_end(args);
	return(p);
}
