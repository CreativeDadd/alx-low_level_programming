#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}

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
