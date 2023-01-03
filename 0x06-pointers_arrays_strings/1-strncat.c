#include "main.h"

/**
  * _strncat - concatenates two strings using at most
  *
  * @dest: The string to be appended upon
  * @src: the string to be appended to dest
  * @n: The number of bytes frp, src to be appende to dest/
  * Return: A pointer to the resultingstring dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = srs[index];
	return (dest);
}
