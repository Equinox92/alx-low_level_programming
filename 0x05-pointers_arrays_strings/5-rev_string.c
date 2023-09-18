#include "main.h"
/**
  *rev_string - outputs a reversed string
  *@s: Input
  *Return: Reversed string
  */
void rev_string(char *s)
{
	int a;
	int c = 0;
	char r = s[0];

	while (s[c] != '\0')
		c++;
	for (a = 0; a < c; a++)
	{
		c--;
		r = s[a];
		s[a] = s[c];
		s[c] = r;
	}

}
