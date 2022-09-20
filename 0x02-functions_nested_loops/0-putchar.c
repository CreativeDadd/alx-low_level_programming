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
 * main - prints putchar
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	 char s[] = "_putchar";
	 int i = 0;

	 while (s[i] != '\0')
	 {
		 _putchar(s[i]);
		 i++;
	 }
	 _putchar(10);

	 return (0);
}
