#include "main.h"


/**
 * swap_int - change the vlause from 402 t0 98
 * @a: the integal a
 * @b: the integal b
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
