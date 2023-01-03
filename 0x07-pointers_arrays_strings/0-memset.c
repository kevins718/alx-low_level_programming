#include "main.h"

/**
  * _memset - ENtry point
  * @s: pointed destination
  * @n: bytes
  * @b: constant byte
  * Return: 0 always (success)
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
