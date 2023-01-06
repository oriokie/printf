#include "main.h"

/**
 * print_int - prints an integer
 * @args: list of arguments pointing to integer
 *
 * Return: length of integer
 */

int print_int(va_list args)
{
	int i = 0;
	int j = 0;
	int count = 1;
	int size = 0;
	int n = va_arg(args, int);

	if (n < 0)
	{
		_putchar('-');
		i = n * -1;
		size++;
	}
	else
		i = n;

	j = i;

	while (j > 9)
	{
		j /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((i / count) % 10) + 48);
		size++;
	}

	return (size);
}
