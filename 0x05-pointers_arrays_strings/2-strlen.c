#include "main.h"
/**
  *_strlen - return the lenght of strings
  *@s: string to be returned
  *Return: length of string
  */
int _strlen(char *s)
{
	int ls = 0;

	while (*s != '\0')
	{
		ls++;
		s++;
	}
	return (ls);
}
