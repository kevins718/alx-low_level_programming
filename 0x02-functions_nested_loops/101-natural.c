#include <stdio.h>

/**
  * main - prints the sum of all multiples of 3 0r 5 upto 1024
  * Return: 0 always (success)
  */
int main(void)
{
	int i, j = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j += i;
		}
		i++;
	}
	printf("%d\n", z);
	return (0);
}
