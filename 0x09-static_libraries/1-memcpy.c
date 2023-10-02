#include "main.h"
/**
  *_memcpy - copies memory area
  *@n: no. of bytes
  *@dest: memory store
  *src:m memory copy
  *Return: copied memory and no. changed bytes
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int i = n;

	for (; m < i; m++)
	{
		dest[m] = src [m];
			n--;

	}
	return (dest);
}
