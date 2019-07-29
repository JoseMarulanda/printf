#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_c - prints character
 * @c: character argument
 * Return: number of characters
 */
char print_c(va_list list)
{
	int c;
	c = va_arg(list, char);
	_putchar(c);
	return(1);
}

/**
 * print_s - prints a string
 * 
 *
 */
int print_s(va_list list)
{
	int i, count = 0;
	char *str;

	str = va_arg(list, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	count++;
	return(count);
}
/**
 * print_percent - pass the percent sing
 * Return: return the percent sing
 *
 */
char print_percent(void)
{
	char str;
	str = "%";
	return (str);
}
