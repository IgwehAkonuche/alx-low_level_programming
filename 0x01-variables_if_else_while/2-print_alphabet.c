#include <stdio.h>
/**
 * main - entry point
 * Description: print lower case a-z
 *
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')

	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
