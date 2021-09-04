#include "main.h"

/**
 *  main - prints "Fizz" for numbers divisible by 3,
 *  prints "Buzz" fro numbers divisible by 5,
 *  prints "FizzBu" for numbers divisible by 3 and 5
 *  for numbers 1-100
 *  Return: 0;
 */
int main(void)
{
	int i;

	for (i = 1; i<= 99; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%i ", i);
	}
	printf("Buzz\n");
	return (0);
