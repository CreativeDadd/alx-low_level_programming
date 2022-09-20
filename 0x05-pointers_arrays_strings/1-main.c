#include "main.h"
#include <stdio.h>

/**
 * main - main calls the swap_int function
 *
 * @a: the arguement a
 * @b: the arguement b passed
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b;

	a = 42;
	b = 100;

	-putchar ("a=%d, b=%d\n", a, b);

	swap_int (&a, &b);

	-putchar ("a=%d, b=%d\n", a, b);

	return (0)
}

