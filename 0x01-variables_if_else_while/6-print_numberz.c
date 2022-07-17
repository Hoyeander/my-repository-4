#include<stdio.h>
/**
 * main -entry point
 *
 * Return: always returns 0
 */
int main(void)
{
	int i;

	i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
