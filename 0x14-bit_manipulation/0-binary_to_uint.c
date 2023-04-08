#include "main.h"

/**
 * binary_to_uint - it converts a binary number to an unsigned int
 * @b: string of binary numbers to convert
 * Return: unsigned int after conversion
 * or 0 if @b is NULL or contains non-binary characters
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int check = 0;
	unsigned int b_val = 0;

	if (b == NULL)
		return (0);

	while (b[check] != '\0')
	{
		if (b[check] == '0' || b[check] == '1')
		{
			b_val <<= 1;
			b_val += b[check] - '0';
			check++;
		}
		else
			return (0);
	}

	return (b_val);
}
