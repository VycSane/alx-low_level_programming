#include <stdlib.h>
#include <stddef.h>
/**
 * print_name - prints naame
 * @name: the name to print
 * @f: the function pointer passed as argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		exit(0);
	f(name);
}
