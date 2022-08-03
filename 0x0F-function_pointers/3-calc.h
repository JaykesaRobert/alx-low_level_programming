#ifndef _CALC_H
#define _CALC_H

#define ERR_NUM (exit(98))
#define ERR_OPP (exit(99))
#define ERR_INF (exit(100))

#define ERR_OUT (printf("Error\n"))

#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associate
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif /* CALC */
