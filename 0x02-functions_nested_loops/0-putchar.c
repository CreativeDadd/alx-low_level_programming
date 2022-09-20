#include "main.h"

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
