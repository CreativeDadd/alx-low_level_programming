/*
 * File: 2-print_alphabet.c
 * Auth: Oyebola Daramola
 */

#include <stdio.h>

/**
 * main - entry point
 * @parameterx: the funti main is void of arg
(*
 * Description: Longer description of the function)?
(* section header: prints lower case a to z)*
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

