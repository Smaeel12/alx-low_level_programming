/**
 * manual_sqrt - calculate manualy the sqrt of a number.
 * @n: natural number
 * @count: counter or number to be multiplied.
 * Return: sqrt 0 if sqrt is not natural.
 */
int manual_sqrt(int n, int count)
{
	if ((count * count) == n)
		return (count);
	else if ((count * count) > n)
		return (-1);
	else
		return (manual_sqrt(n, count + 1));
}
/**
 * _sqrt_recursion - return the sqrt of a natural number.
 * @n: natural number
 * Return: sqrt 0 if sqrt is not natural.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (n);

	else
		return (manual_sqrt(n, 1));
}
