#include "main.h"

/**
 * positive_or_negative - testing for positive or negtive numbers
 *
 * @i: number being tested
 *
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
