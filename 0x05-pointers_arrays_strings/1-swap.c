#include "main.h"

/**
 * swap_int - This swaps to values of address pointed to
 *
 * @a: pointer arg 1
 * @b: pointer arg 2
 */
void swap_int(int *a, int *b)
{
	int v = *a;
	*a = *b;
	*b = v;
}

