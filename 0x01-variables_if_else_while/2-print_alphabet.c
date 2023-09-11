#include <stdio.h>
/**
*main - Entry point
*Description: 'Print the alphabet in lowercase characters'
*Return: Always 0 (Success)
 */
int main(void)
{
	int d = 97;

	while (d <= 122)
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
