#include<stdio.h>
/**
 *main -entry point
 *
 * Return: alway return 0
 */
int main(void)
{
	int i;
	
	int j;
	
	for (i = 0; i < 9; i++)
	{
6		for (j = i + 1; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i == 8 && j == 9)
				continue;
			putchar(44);
			putchar(32);
		}
	}
		putchar(10);
		return (0);
}
