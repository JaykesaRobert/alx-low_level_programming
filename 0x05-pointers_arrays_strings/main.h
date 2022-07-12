#ifndef _MAIN_H
#define _MAIN_H

#include <string.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * reset_to_98 - reset the value of a pointer to 98
 * @n: integer pointer
 *
 * Return: void
 */
void reset_to_98(int *n);

/**
 * swap_int - swap two integers
 * @a: integer
 * @b: integer
 *
 * Return: void
 */
void swap_int(int *a, int *b);

/**
 * _strlen - get a string length
 * @s: character pointer
 *
 * Return: integer len
 */
int _strlen(char *s);

/**
 * _puts - print to the stdout
 * @str: string
 *
 * Return: void
 */

void _puts(char *str);

/**
 * print_rev - print in reverse
 * @str: string
 *
 * Return: void
 */

void print_rev(char *str);

/**
 * rev_string - reverse a string
 * @s: character pointer
 */
void rev_string(char *s);

/**
 * _puts2 - print to the stdout
 * @str: string
 *
 * Return: void
 */

void puts2(char *str);

/**
 * puts_half - print half a string
 * @str: character pointer
 * Return: void
 */

void puts_half(char *str);

/**
 * print_array - prints an array
 * @a: integer
 * @n: integer
 *
 * Return: void
 */
void print_array(int *a, int n);

/**
 * _strcpy - copy string
 *
 * Return: Character
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s);


#endif
