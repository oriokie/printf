#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * struct function_handler - structure for the _printf function
 * @specifier: the specifier characters
 * @function: a function pointer
 */
typedef struct
{
	char specifier;
	void (*function)(int *, va_list);
} function_handler;

int _printf(const char *format, ...);
int _putchar(char c);
void print_integer(int *count, va_list args);
void print_binary(int *count, va_list args);

#endif/*MAIN_H*/
