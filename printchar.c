#include "main.h"
#include<stdarg.h>
#include<stdio.h>
/**
 * _printf = function that produces output according to a format.
 * @format: a character string.
 * @...: reperesents the variable list of arguments.
 *
 * Return: number of characters to be printed.
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap, format);
	if (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			
			switch(format[i + 1])
			{
				case 'c':
					va_arg(ap, int);
					break;
				case 's':
					va_arg(ap, char*);
					break;
			}
		}
		putchar(format[i]);
		i++;
	}
	return (i + 1);
	va_end(ap);
}
