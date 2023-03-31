/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp[100];

	while (i < (n - 1))
	{
		*(tmp + i) = a[n - i - 1];
		i++;
	}
	while (i >= 0)
	{
		a[i] = tmp[i];
		i--;
	}
}
