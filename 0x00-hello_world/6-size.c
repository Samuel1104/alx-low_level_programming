#include <stdio.h>

/**
 * main - the main function that starts the code
 * Return: always returns 0 if code runs successful
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float: 4 byte(s) %lu byte(s)", sizeof(int));
	return (0);
}
