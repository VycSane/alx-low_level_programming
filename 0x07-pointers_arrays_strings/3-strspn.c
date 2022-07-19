/**
 * _strspn - gets the length of a prefix substring.
 * @s: first arg
 * @accept: second arg
 *
 * Return: an unsigned integer value.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int m = 0;
	
	for(i = 0; s[i] != '\0'; i++)
	{
		for(j = 0; accept[j] != '\0'; j++)
		{
			if(s[i] == accept[j])
			{
				m++;
				break;
			}
		}
	}
	return (m);
}
