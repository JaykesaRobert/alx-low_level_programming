#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>

int _putchar(char);

/**
 * _memset - append n bytes of memory with a constant value
 * @s: pointer to memory area
 * @b: constant value
 * @n: number of bytes to fill
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - append n bytes of memory with a constant value
 * @dest: pointer to memory area
 * @src: pointer to a memory area
 * @n: number of bytes
 * Return: pointer to memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locate a character in a string
 * @s: string to search
 * @c: target characer
 * Return: pointer to that character in string
 */

char *_strchr(char *s, char c);

/**
 * _strspn - return length of string that matches values
 * given consistently
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - return pointer to byte in s that
 * matches a byte in accept
 *
 * @s: string to search
 * @accept: target matches
 * Return: pointer to index of string at first occurence
 */

char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locate and return pointer to first
 * occurence of substring
 *
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to index of string at first occurence of whole substring
 */

char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - print chessboard given set 2D array
 * @a: 2D array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - print sums of diagonals in matrix
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size);

/**
 * set_string - set value of pointer to a char
 * @s: variable of type pointer
 * @to: char
 */

void set_string(char **s, char *to);

#endif
