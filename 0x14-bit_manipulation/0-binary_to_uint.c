#include "main.h"

/**
 * powX - raises b to p
 * @b: base
 * @p: power
 * Return: b the power of p
 */
int powX(int b, int p)
{
	int prod = 1;

	while (p > 0)
	{
		prod *= b;
		p--;
	}
	return (prod);
}

/**
 * _len - length of a string
 * @s:string
 * Return: lenght of s
 */
int _len(const char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input string
 * Return: unsigned decimal conversion, 0 if input is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int power;
	int num = 0;

	if (!b)
		return (0);
	power = _len(b) - 1;
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		if (*b == '1')
			num += powX(2, power);
		b++;
		power--;
	}
	return (num);
}

