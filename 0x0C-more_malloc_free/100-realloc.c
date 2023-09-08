#include "main.h"
#include <stdlib.h>

/**
* _realloc - move memory block to different location
* @ptr:reference to previous allocated memory
* @old_size: the allocated memory size for 'ptr' in bytes
* @new_size: the byte size of the new memory block
* Return: ptr
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
