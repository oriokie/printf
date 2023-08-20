#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>

typedef struct
{
	char specifier;
	void (*function)(int *, va_list);
}function_handler;

int _printf(const char *format, ...);
int _putchar(char c);

#endif/*MAIN_H*/
