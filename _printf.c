#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a character string composed of zero or more directives
 *
 * Return: length of output
 */

int _printf(const char *format, ...)
{
	va_list args;

	prints specifier[] =
	{
		{"c", print_char},
		{"i", print_int},
		{"d", print_int},
		{"s", print_string}
	};
	int i = 0, j = 0;
	int len_spec;

	va_start(args, format);

	len_spec = sizeof(specifier) / sizeof(specifier[0]);
	
}
