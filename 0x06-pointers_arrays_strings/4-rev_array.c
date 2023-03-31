/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, tmp[100];

	while (i < n)
	{
		tmp [i] = a[(n - 1) - i];
		i++;
	}
	while (j >= 0)
	{
		a[j] = tmp[j];
		j--;
	}
}
