#include <stdio.h>

/**
 * main - Entry point
 * Description: 'print alphabet lowercase and uppercase'
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}
	for (i = 'A' ; i <= 'Z' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
