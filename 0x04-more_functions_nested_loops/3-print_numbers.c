#include "main.h"

/**
 * print_numbers - print one to nine
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int number = 48;

	for (number = 48; number < 58; number++)
	{
		_putchar(number);
	}
	_putchar(10);
}
