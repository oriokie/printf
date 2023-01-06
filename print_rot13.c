#include "main.h"

/**
 * print_rot13_string - prints a rot13'ed string
 * @args: list of arguments pointing to string
 *
 * Return: length of string
 */

int print_rot13_string(va_list args)
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
		if ((str[i] >= 97 && str[i] <= 109) ||
		    (str[i] >= 65 && str [i] <= 77))
			_putchar(*(str + i) + 13);

		else if ((str[i] >= 110 && str[i] <= 122) ||
			 (str[i] >= 78 && str[i] <= 90))
			_putchar(*(str + i) - 13);

		else
			_putchar(str[i]);
	}

	return (len);
}
