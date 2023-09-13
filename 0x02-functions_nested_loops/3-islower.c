#include "main.h"
/**
  *_islower - returns value (1) if lowercase else (0) is othercase
  *@c: Characters in ASCII code
  *Return: 1 lowercase. 0 for other
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
{
	return (1);
}
else
{
	return (0);
}
_putchar('\n');
}
