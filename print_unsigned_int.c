#include "main.h"

/**
 * print_unsigned_int - prints an unsigned integer
 * @args: list of arguments pointing to integer
 *
 * Return: length of unsigned integer printed
 */

int print_unsigned_int(va_list args)
{
	unsigned int a, i, j;
	unsigned int size = 0;
	unsigned int count = 1;

	a = va_arg(args, unsigned int);

	i = a;

	j = i;

	while (j > 9)
	{
		j /= 10;
		count *= 10;
	}

	while (count >= 1)
	{
		_putchar(((i / count) % 10) + '0');
		count /= 10;
		size++;
	}
	return (size);
}
