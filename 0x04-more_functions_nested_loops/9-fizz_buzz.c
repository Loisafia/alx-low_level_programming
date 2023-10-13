#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * Description - A program that prints numbers from 1 to 10, followed by a new line, print Fizz for multiplies of 3, Buzz for multiples of 5 and FizzBuzz for multiples of both numbers
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}	
