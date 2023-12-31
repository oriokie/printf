#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct function_h - structure for the _printf function
 * @specifier: the specifier characters
 * @function: a function pointer
 */
typedef struct function_h
{
	char specifier;
	void (*function)(int *, va_list);
} function_handler;

int _printf(const char *format, ...);
int _putchar(char c);
void print_integer(int *count, va_list args);
void print_binary(int *count, va_list args);
void print_char(int *count, va_list args);
void print_string(int *count, va_list args);
void print_percent(int *count, va_list args);


#endif/*MAIN_H*/
