#include "main.h"
/**
  *_strlen - return string lenght
  *@s: string
  *Return: lenght
  */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
