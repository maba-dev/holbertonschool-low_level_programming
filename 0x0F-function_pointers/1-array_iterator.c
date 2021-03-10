#include <stdlib.h>
#include "function_pointers.h"

/**
*array_iterator - a function that executes a function given as a parameter
*@array: int array
*@size: int
*@action: pointer of fonction
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
