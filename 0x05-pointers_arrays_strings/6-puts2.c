#include "main."
/**
  *puts2 - selects one character to output beginning 
  *with the first
  *@str: input
  *Return: print output
  */
void puts(char *str)
{
	int a;
	int ls = 0;
	int snd = 0;
	char *b = str;

	while (*b != '\0')
	{
		b++;
		ls++;
	}
	snd = ls - 1;
	for (a = 0 ; a <= snd ; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
	}
	}
	_putchar('\n');
}
