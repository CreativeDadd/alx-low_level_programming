/*
 * File: 2-print_alphabet.c
 * Auth: Oyebola Daramola
 */

#include <stdio.h>

/**
 * main - entry point
 *
(*
 * Description: The function prints a to z)?
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}

