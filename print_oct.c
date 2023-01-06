#include "main.h"

/**
 * print_octal - prints octal conversion of integer
 * @args: list of arguments pointing to integer
 *
 * Return: length of printed octal value
 */

int print_octal(va_list args)
{
	unsigned int a;
	int i = 0;
	unsigned int array[11];
	int count = 0;

	a = va_arg(args, unsigned int);

	if (a == 0)
	{
		_putchar('0');
		return (1);
	}

	while (a > 0)
	{
		array[i] = a % 8;
		a = a / 8;
		i++;
	}

	i -= 1;

	while (i >= 0)
	{
		_putchar(array[i] + '0');
		count++;
		i--;
	}

	return (count);
}
