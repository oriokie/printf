#include <unistd.h> /** added a space **/
/**
 * _putchar: prints a  cahracter to the standard output
 * @c: The character to be printed
 *
 * Return: 1 on success. On error it returns -1
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
