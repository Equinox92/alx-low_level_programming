#include "main.h"
/**
  *_strspn - Entry point
  *@s: value
  *@accept: value
  *Return: Always 0 (Success)
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int v = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				v++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (v);
		}
		s++;
	}
	return (v);
}
