#include "main.h"
/**
 * print_char - function that takes a va_list called list and then gets va-arg
 * and then prints it as a chararacter
 * @count: pointer to the count of printed characters
 * @args: variable arg list
 * Return: none
 */
void print_char(int *count, va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	(*count)++;
}
/**
 * print_string - function that takes a va_list and then gets the va-arg and
 * then prints it character
 * @count: the pointer to the count of the printed integers
 * @args: the variable arg list
 * Return: none
 */
void print_string(int *count, va_list args)
{
	char *string;

	string = va_arg(args, char *);

	while (*string != '\0')
	{
		_putchar(*string);
		string++;
		(*count)++;
	}
}
/**
 * print_percent - function that prints the percentage sign
 * @count: the number of characters
 * @args: the var arg list
 * Return: None
 */
void print_percent(int *count, va_list args)
{
	(void)args;
	_putchar('%');
	(*count)++;
}
/**
 * _printf - custom printf function that takes in variable arguments
 * mirrors the normal c print f function
 * @format: the string
 * @...: variable arguments that can be passed into the function
 * Return: count of characters printed excluding the null byte
 */
int _printf(const char *format, ...)
{
	function_handler form[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};
	int count;
	int i;
	va_list args;

	va_start(args, format);

	count = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			for (i = 0; form[i].specifier != '\0'; i++)
			{
				if (*format == form[i].specifier)
				{
					form[i].function(&count, args);
					break;
				}
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
