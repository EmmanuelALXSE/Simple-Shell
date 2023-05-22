#include "shell.h"

/**
 * bfree - Frees a pointer and then NULLs the address.
 * @ptr: address of the given pointer to free.
 *
 * Return: 1 if freed,then otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
