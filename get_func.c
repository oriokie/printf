#include "main.h"
/**
*get_func - produces output according to format
*
*@format: string to be printed
*
*Return: number of charaters printed else 0
*/
int (*get_func(const char format))(va_list)
{
	selector(array[]) = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'b', decimaltobinary},
		{'u', print_unsigned_int},
		{'p', print_address},
		{'R', print_R},
		{'X', print_X},
		{'x', print_x},
		{'u', print_u},
		{'o', print_o},
		{'\0', NULL}
	};

	int i;

	for (i = 0; array[i].ident != '\0'; i++)
	{
		if (array[i].ident == format)
		{
			return (array[i].f);
		}
	}
	return (0);
}
