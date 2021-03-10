#include <stdlib.h>
#include "function_pointers.h"

/**
*print_name - a function that prints a name
*@name: char
*
*@f: pointer of fonction
*/
void	print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
