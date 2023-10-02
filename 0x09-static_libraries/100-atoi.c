#include "main.h"
/**
  *_atoi - convert str into int
  *@s: val used
  *Return: int
  */
int _atoi(char *s)
{
	unsigned int a = 0;
	int b = 1, c = 0;

	while (!(s[c] <= '9' && s[c] >= '0') && s[c] != '\0')
	{
		if (s[c] == '-')
			b *= -1;
		c++;
	}
	while (s[c] <= '9' && (s[c] >= '0' && s[c] != '\0'))
	{
		a = (a * 10) + (s[c] - '0');
		c++;
	}
	a *= b;
	return (a);
}
