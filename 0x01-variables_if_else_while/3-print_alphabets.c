#include <stdio.h>

/**
  * main - Entry point
  *
  *Return: 0 always (success)
  */
int main(void)
{
	char ca;
	for (ca = 'a'; ca <= 'z'; ca++)
		putchar(ca);

	for (ca = 'A'; ca <= 'Z'; ca++)
		putchar(ca);

	putchar('\n');

	return (0);
}
