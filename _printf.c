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
	int i, p;
	va_list args;
	void (*f)(va_list);
	
	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			f = get_func(format[i + 1]);
			p = f(args);	
	
	
	
	
		}
	
			i++;
		
	}
	va_end(args);
	return(0);
}
