#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
* print_int - Print number
* @ap: va_list
*
* Return: count.
*/
int print_int(va_list ap)
{
	int a[10];
	int j, m, i, sum, count;

	i = va_arg(ap, int);
	count = 0;
	m = 1000000000;
	a[0] = i / m;
	for (j = 1; j < 10; j++)
	{
		m = m / 10;
		a[j] = (i / m) % 10;
	}
	if (i < 0)
	{
		_putchar('-');
		count++;
		for (j = 0; j < 10; j++)
			a[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			count++;
		}
	}
	return (count);
}
