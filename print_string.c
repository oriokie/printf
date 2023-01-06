#include "main.h"

/**
 * print_string - prints a string
 * @args: list of arguments pointing to string
 *
 * Return: length of string
 */

int print_string(va_list args)
{
	char *str;
	int len = 0, i;

	str = va_arg(args, char *);

	if (str == NULL)
		return (-1);

	for (; *(str + len) != '\0'; len++)
		;

	for (i = 0; i < len; i++)
	{
		_putchar(*(str + i));
	}

	return (len);
}
