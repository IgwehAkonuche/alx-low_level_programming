#include <stdio.h>

/**
 * main - Print sizes of data type in c
 *
 * Description: 'Data types'
 * Return: 0
 *
 */
int main(void)
{
	char q;
	int w;
	long int e;
	long long int r;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(q));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(r));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
