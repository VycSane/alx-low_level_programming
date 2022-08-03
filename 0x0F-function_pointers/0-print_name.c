/**
 * print_name - prints naame
 * @name: the name to print
 * @f: the function pointer passed as argument
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
