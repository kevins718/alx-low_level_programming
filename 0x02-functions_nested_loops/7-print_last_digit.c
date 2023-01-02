#include "main.h"

/**
  * print_last_digit - prints last digit of a number
  * @i; the number to be printed
  * Return: value of the last digit of a number
  */
int print_last_digit(int i)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
