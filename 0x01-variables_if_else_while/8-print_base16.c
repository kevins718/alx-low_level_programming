#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: 0 always (success)
  */
int main(void)
{
	int num;
	char ch;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar (ch);

	putchar('\n');

	return (0);
}
