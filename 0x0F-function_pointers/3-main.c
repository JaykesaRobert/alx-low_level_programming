#include "3-calc.h"

/**
 * main - Entry point
 * @argc: num of args
 * @argv: array of args
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int, int);

	if (argc != 4)
	{
		ERR_OUT;
		ERR_NUM;
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);

	printf("%d\n", f(a, b));

	return (0);
}
