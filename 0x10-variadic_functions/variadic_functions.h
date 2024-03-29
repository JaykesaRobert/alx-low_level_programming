#ifndef _VARIADIC_FUNCS_H
#define _VARIADIC_FUNCS_H

#define NIL "(nil)"

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * sum_them_all - sum all params
 * @n: num of params
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - print numbers
 * @separator: separator
 * @n: num of params
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * struct opt - struct
 * @opt: selection
 * @meth: function
 */
typedef struct opt
{
	char opt;
	void (*meth)(va_list);
} opt_t;

/**
 * print_all - prints anything
 * @format: list of types of args
 *
 * Return: void
 */

void print_all(const char * const format, ...);

/**
 * print_char - prints char
 * @params: params
 */
void print_char(va_list params);

/**
 * print_int - prints int
 * @params: params
 */
void print_int(va_list params);

/**
 * print_float - prints float
 * @params: params
 */
void print_float(va_list params);

/**
 * print_string - prints string
 * @params: params
 */
void print_string(va_list params);

#endif
