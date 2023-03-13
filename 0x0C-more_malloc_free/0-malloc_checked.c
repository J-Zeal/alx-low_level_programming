#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to be malloced
 * Return: returns a void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
