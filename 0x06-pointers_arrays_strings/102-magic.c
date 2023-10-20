#include <stdio.h>
/**
 * main - Entry point
 *Description: This program adds one line to an already existing code.
 *Return: Always return 0 (Success)
 */

int main(void)
{
	int a[5];
	int *p;

	a[2] = 1024;
	p = &a[0];
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
	*(p + 2) = 98;
  /* ...so that this prints 98\n */
	printf("*(p + 2) = %d\n", *(p + 2));
	return (0);
}
