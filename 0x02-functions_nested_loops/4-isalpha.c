#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: this is a lettr
 * Return: 1 if c is a letter,lowercase or lowercase or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
