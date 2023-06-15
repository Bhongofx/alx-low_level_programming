#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float f;

	printf("size of a char: %zd byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %zd byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %zd byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %zd byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %zd byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
