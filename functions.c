#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_c - prints character
 * @c: character argument
 * Return: number of characters
 */
int print_c(va_list args)
{
	int c;
	c = va_arg(args, int);
	_putchar(c);
	return(1);
}

/**
 * print_s - prints a string
 *  
 *
 */
int print_s(va_list args)
{
	int i, count = 0;
	char *str;
	i = 0;

	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return(count);
}
