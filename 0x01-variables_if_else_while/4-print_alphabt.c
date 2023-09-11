#include <stdio.h>
/**
*main - Entry point
*Description: 'Prints the alphabet in lowercase'
*Return: Always 0 (success)
*/
int main(void)
{
	int dec = 97;

	while (dec <= 122)
	{
		if (dec == 101 || dec == 113)
		{
			dec++;
			continue;
		}
		putchar (dec);
		dec++;
	}
	putchar('\n');
	return (0);
}
