#include "main.h"

/**
  * _islower - checks for lower case character
  * @c: takes in parameter c of type int
  * Return: 1 for lowercase character or 0 for anything else
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
