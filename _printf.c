#include "main.h"

/**
 * _printf - custom printf function that takes in variable arguments
 * @format: the string
 * @...: variable arguments that can be passed into the function
 * Return: count of characters printed excluding the null byte
 */
int _printf(const char *format, ...)
{
	va_list args;

	function_handler form[] = {
	{'c', print_char}, {'s', print_string}, {'%', print_percent},
	{'d', print_integer}, {'i', print_integer}, {'b', print_binary},
	{'\0', NULL}};
	int count = 0;
	int i;

	va_start(args, format);

	while (format)
	{
		while (*format != '\0')
		{
			if (*format == '%')
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
		va_end(args);
		return (count);
	}
}
