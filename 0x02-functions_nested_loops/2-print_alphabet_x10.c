#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int count = '0';
	char letter = 'a';

	while (count++ <= 9)
	{
	letter = 'a';
	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	_putchar('\n');

	count++;
	}
}
