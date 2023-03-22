#include "function_pointers.h"

/**
 *array_iterator - executes a func given as a param on element of array
 *@array: array to execute func on
 *@size: size of array
 *@action: pointer to the func to use
 *
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
		while  (size--)
			action(*(array++));
}
