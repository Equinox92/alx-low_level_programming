#include "main.h"
/**
  *char *_strcpy - copies str pointed to by src
  *@src: copy from
  *@dest: copy to
  *Return: string
  */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + 1) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[a] = src[b];
	}
	dest[1] = '\0';
	return (dest);
}
