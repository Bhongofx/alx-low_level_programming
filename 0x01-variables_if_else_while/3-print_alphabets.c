#include <stdio.h>
/**
 * main - Print alphabets lowercase and uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(m);
		m++
	}
	putchar('\n');
	return (0);
}