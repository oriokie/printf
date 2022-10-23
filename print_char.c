#include "main.h"

/**
 * print_char - prints a character
 * @args: list of arguments pointing to character
 *
 * Return: length of character
 */

int print_char(va_list args)
{
	char a;

	a = va_arg(args, int);

	(_putchar(a));
	return (1);
}
