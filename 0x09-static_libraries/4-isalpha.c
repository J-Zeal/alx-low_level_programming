#include "main.h"

/**
 * _isalpha - checks if a char is alphabetic.
 * @c: the char is to be checked.
 * Return: 1 if char is letter, lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
