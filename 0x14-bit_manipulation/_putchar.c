#include <unistd>

/**
 * _putchar - writes the char c to standard output
 * @c - the charater to be put in by the user and printed out to the standard putput
 * Return: On success 1
 * On error: -1 is returned and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
