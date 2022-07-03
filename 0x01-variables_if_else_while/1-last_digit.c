#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program Entry point
 *
 * Description: A program to determine wether an int is +ve, -ve or 0
 *
 * Return: 0 indicates success
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last = n % 10;

	if (last >= 6)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (last < 6 && last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	else
		printf("Last digit of %d is 0 and is 0\n", n);
	return (0);
}

