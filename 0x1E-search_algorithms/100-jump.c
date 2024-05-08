#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in @array (should be a non-negative integer)
 * @value: Value to search for
 *
 * Return: The index where @value is located, or -1 if @value is not present or if the input is invalid.
 */
int jump_search(int *array, size_t size, int value)
{
    int step = sqrt(size);
    int prev = 0;
    int end = (int) size - 1;
    int i;

    if (array == NULL || size <= 0)  
        return -1;

    while (array[prev] < value && prev < end)
    {
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
        prev += step;
        step = (step < end - prev) ? step : end - prev; 
    }

    printf("Value found between indexes [%d] and [%d]\n", prev, (prev + step < end) ? prev + step : end);

    for (i = prev; i <= ((prev + step < end) ? prev + step : end); i++) {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}

