#include "main.h"
#include <stdio.h>

/**
 * print_hxdc - prints hexadecimal conversion of integer
 * @n: unsigned integer
 * @c: selector for uppercase or lowercase scenario
 * Return: length of hexadecimal number printed
 */

int print_hxdc(unsigned int n, unsigned int c)
{
	unsigned int array[11];
	int i = 0;
	int size = 0;

	while (n)
	{
		array[i] = n % 16;
		n /= 16;
		i++;
	}
	i--;

	while (i >= 0)
	{
		if (array[i] > 9 && c == 0)
			_putchar((array[i] - 10) + 97);

		else if (array[i] > 9 && c == 1)
			_putchar((array[i] - 10) + 65);

		else
			_putchar(array[i] + '0');
		size++;
		i--;
	}
	return (size);
}

/**
 * print_hex - prints unsigned int in lowercase hex notation
 * @args: unsigned int to print
 * Return: number of digits printed
 *
 */

int print_hex(va_list args)
{
	return (print_hxdc(va_arg(args, unsigned int), 0));
}

/**
 * print_HEX - prints an unsigned int in uppercase hex notation
 * @args: unsigned int to print
 * Return: number of digits printed
 *
 */

int print_HEX(va_list args)
{
	return (print_hxdc(va_arg(args, unsigned int), 1));
}
