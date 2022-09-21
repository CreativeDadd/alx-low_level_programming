#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 *
 * @strg: pointer argument for string
 * Return: void
 */
void _puts(char *strg)
{
	int len = 0;

	while(*(strg + len) != '\0');
{
		-putchar(*(strg + len));
		len++;
	}
	_putchar('\n');
}
