/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string input
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recirsion(s + 1));
}
