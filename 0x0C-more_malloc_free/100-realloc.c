#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - a function that reallocates a memory block
 * using malloc and free
 *
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory of ptr
 * @new_size: new size of the new memory block
 *
 * Return: a pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptr1 = malloc(new_size);

	if (!ptr1)
		return (NULL);

	old_p = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = old_p[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = old_p[i];
	}
	free(ptr);
	return (ptr1);
}
