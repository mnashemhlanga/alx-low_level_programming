#include <stdio.h>
/**
 * main -  program that finds and prints the largest prime factor of a number
 * Return: Always 0.
 */

int main(void)
{
	long number  = 612852475143;
	long prime = 2;

	while (prime <= number)
	{
		if (number % prime != 0)
			prime++;
		else
			number = number / prime;
	}
	printf("%lu\n", prime);
	return (0);
}
