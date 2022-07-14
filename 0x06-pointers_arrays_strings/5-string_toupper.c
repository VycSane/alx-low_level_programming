/**
 * string_toupper - changes all letters of a string to uppercase.
 * @str: the input string
 *
 * Return: pointer to the string.
 */
char *string_toupper(char *str)
{
	char tmp;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		tmp = str[i];

		if (tmp >= 97 && tmp <= 122)
			str[i] = tmp - 32;
	}
	return (str);
}
