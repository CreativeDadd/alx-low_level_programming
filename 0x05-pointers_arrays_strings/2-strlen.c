#include "main.h"

/**
 * _strlen - renders the length of strings
 *
 * @s: strig's pointer
 * Return: Length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;

	return (length);
}
