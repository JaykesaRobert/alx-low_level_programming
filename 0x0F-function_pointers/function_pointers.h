#ifndef _FUNCTION_POINTER_H
#define _FUNCTION_POINTER_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: string
 * @f: pointer to a func
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - execute a func on each array
 * @array: array
 * @size: size of array
 * @action: pointer to a func
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - search for an integer
 * @array: array
 * @size: size
 * @cmp: func pointer
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int));

#endif
