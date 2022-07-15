#ifndef _MAIN_H
#define _MAIN_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcat - concatenate two strings
 *
 * Return: char *
 */

char *_strcat(char *dest, char *src);

/**
 * _strncat - Entry point
 * @dest: char pinter
 * @src: char pointer
 * @n: integer
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - Entry point
 * @dest: char pinter
 * @src: char pointer
 * @n: integer
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compare two strings
 * @s1: char pointer
 * @s2: char pointer
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2;

/**
 * reverse_array - reverse array
 * @a: array
 * @n: number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int n);

/**
 * string_toupper - convert to uppercase
 * Return: char pointer
 */

char *string_toupper(char *);

/**
 * cap_string - capitalize each word
 * @k: word strring
 *
 * Return: string
 */
char *cap_string(char *s);

/**
 * leet - encode a string to 1337
 * @s: string
 *
 * Return: string
 */

char *leet(char *s);

/**
 * rot13 - encode a string using rot13
 * @s: string
 *
 * Return: string
 */

char *rot13(char *s);

/**
 * print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */

void print_number(int n);

int _putchar(char c);

/**
 * infinite_add - add two numbers
 * @n1: number 1
 * @n2: number 2
 * @r: result
 * @size_r: buffer size
 *
 * Return: pointer to sol
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size);

#endif


