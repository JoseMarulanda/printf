z#ifndef our_printf
#define our_printf
#include <stdio.h>
#include <stdarg.h>
/**
 * struct specifier - struct specifier
 * @valid: the valid character.
 * @f: the functions associated.
 *
 */
typedef struct specifier
{
	char *valid;
	void(*f)();
} spec;
int _printf(const char *format, ...);
int print_c(va_list list);
int print_s(va_list list);
int print_percent(va_list list);
int _putchar(char c);
#endif
