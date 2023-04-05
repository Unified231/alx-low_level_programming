#include "main.h"

int actual_prime(int n, int i);

/**
*is prime number-says if an integer is a prime number or not
*@n: number to evaluate
*
*Return: 1 if n is a prime number, 0 if not
**/

int is prime number(int n)
{
	if (n <= 1)
	return (0);
	return (actual prime(n, n - 1));
}

/**
*actual prime-calculate if a number is prime recursively
*@n: number to evaluate
*@i:iterator
*
*Return: 1 if n is prime, 0 if not
**/

int actual prime(int n, int i)
{
	if (i == 1)
	return (1);

	if (n % i == 0 && i > 0)
	return (0);
	return (actual prime(n, i - 1));

}
