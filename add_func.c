#include "main.h"
/**
 * print_integer - function that prints an integer
 * @count: counts the number of arguments
 * @args: arguments passed to the function
 * Return: none
 */
void print_integer(int *count, va_list args)
{
	unsigned int n;

	int num = va_arg(args, int);

	n = num;

	if (num < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		print_integer(count, args);
	}
	_putchar(n % 10 + '0');
	(*count)++;
}
/**
 * print_binary - function that converts a number into binary
 * @count: the count of arguments
 * @args: the number of arguments
 * Return: none
 */
void print_binary(int *count, va_list args)
{
	unsigned int num;
	char binary[65];
	int index = 0;
	int i;

	num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		(*count)++;
		return;
	}
	while (num > 0)
	{
		binary[index++] = (num % 2) ? '1' : '0';
		num = num / 2;
	}
	binary[index] = '\0';

	for (i = index - 1; i >= 0; i--)
	{
		_putchar(binary[i]);
	}
	(*count)++;
}
