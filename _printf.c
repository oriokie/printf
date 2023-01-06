#include "main.h"
#include <stdio.h>

/**
 * _printf - produces output according to a format
 * @format: a character string composed of zero or more directives
 *
 * Return: length of output
 */

int _printf(const char *format, ...)
{
	va_list args;

	prints specifier[] = {
		{"c", print_char},
		{"i", print_int},
		{"d", print_int},
		{"s", print_string},
		{"r", print_rev_string},
		{"R", print_rot13_string},
		{"b", print_dec_binary},
		{"u", print_unsigned_int},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_HEX},
		{'\0', NULL}
	};
	int i = 0, j = 0;
	int len_spec;
	int size = 0;

	va_start(args, format);

	len_spec = sizeof(specifier) / sizeof(specifier[0]);
	len_spec -= 1;

	if (format == NULL)
		return (-1);

	while (*(format + i) != '\0')
	{
		j = 0;

		if (*(format + i) == '%')
		{
			i += 1;

			while (j < len_spec &&
			       format[i] != (specifier[j].symbol[0]))
					j++;

			if (*(format + i) == '\0')
				return (-1);
			else if (*(format + i) == '%')
			{
				_putchar('%');
				size += 1;
				i += 1;
			}
			else if (j < len_spec)
			{
				size += specifier[j].print(args);

				if (size == -1)
					return (-1);
				i += 1;
			}
			else
			{
				_putchar('%');
				_putchar(*(format + i));
				size += 1;
				i += 1;
			}
		}
		else
		{
			_putchar(*(format + i));
			size += 1;
			i += 1;
		}
	}

	va_end(args);

	return (size);
}
