#include<stdio.h>
/**
 *main - entry point
 *
 * Return: always returns 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar(10);
	return (0);
}
