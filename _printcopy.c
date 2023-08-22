#include "main.h"

/**
 * _printf - prints strings and characters and returns number.
 * @format: the string to hold strings and format.
 * @...: represents the variable argumeats.
 */
int _printf(const char *format, ...)
{
	va_start(args, format);

	function_handler form[] = {
	{'c', print_char}, {'s', print_string}, {'%', print_percent},
	{'d', print_integer}, {'i', print_integer}, {'b', print_binary},
	{'\0', NULL}};
	int count, i;

	va_list args;

	while (format)
	{
		while (*format != '\0')
		{
			if (*format == '%')
			{
				format++;
				for (i = 0; form[i].specifier != '\0'; i++)
				{
					format++;
					if (*format == form[i].specifier)
					{
						form[i].function(&count, args);
						break;
					}
					
				}
				else
				{
					_putchar(*format);
					count++;
				}
				format++;
			}
			else if (*format == '\\')
			{
				_putchar('\\');
				count++;
			}
			else
			{
				_putchar(*format);
				count++;
			}
			format++;
		}
		va_end(args);
		return (count);
	}
