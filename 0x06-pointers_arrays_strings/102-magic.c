/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: Pointer to the result (r) or 0 if the result cannot fit in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0;
	int len2 = 0;
	int i, j, k, carry, sum;

	/* Calculate the lengths of n1 and n2 */
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	/* Check if the result can be stored in r */
	if (len1 >= size_r || len2 >= size_r)
		return (0);

	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 1;
	r[k] = '\0';  /* Set the null terminator at the end of the result string */

	carry = 0;
	while (i >= 0 || j >= 0)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[--k] = (sum % 10) + '0';

		i--;
		j--;
	}

	/* If there is still a carry, check if it can be stored in r */
	if (carry != 0 && k > 0)
		r[--k] = carry + '0';
	else if (carry != 0)
		return (0);

	return (&r[k]);
}
