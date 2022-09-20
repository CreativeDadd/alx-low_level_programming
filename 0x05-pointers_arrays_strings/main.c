#include <stdio.h>
#include "main.h"

/**
 * main - resets the value of the variable
 * @n: the integer to reset
 *
 * Return: void
 */

int main(void)
{
	int n;
	n = 402;

	_putchar ("n=%d\n", n);

	reset_to_98 (&n)
		_putchar ("n=%d\n", n);

	return (0);
}

