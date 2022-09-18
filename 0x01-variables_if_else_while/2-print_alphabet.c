/*
 * File: 2-print_alphabet.c
 * Auth: Oyebola Daramola
 */

#include <stdio.h>

/**
 * mian - entry point
 *
 * Description: 'This program writes a to z'
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}

