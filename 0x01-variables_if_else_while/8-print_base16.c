#include <stdio.h>

/**
 * main - prints all number in base 16 in lower case followed by a new line
 *
 * Return: Always 0 success
 */

int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}

	for (ch = 'a'; ch <= 'f'; ch++)

	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
