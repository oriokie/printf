#include<unistd.h>
/**
 * _putchar: prints a  cahracter.
 * @c: cahracter to be printed.
 *
 * Return: 1 on success.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
