#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints and returns the last digit of a number
 * @n: the integer to extract the last digit from
 *
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = abs(n % 10);  /* Calculate the last digit */
	_putchar('0' + last_digit); /* Print the last digit */
	return (last_digit);
}

