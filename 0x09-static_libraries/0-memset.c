#include "main.h"
/**
  *_memset - set block with a memory value
  *@n: no. of bytes to change
  *@s: starting address
  *@b: desired value
  *Return: value for n bytes
  */
char *_memset(cahr *s, char b, unsigned int n)
{
	int v = 0;

	for (; n > 0; v++)
	{
		s[v] = b;
		n--;
	}
	return (s);
}
