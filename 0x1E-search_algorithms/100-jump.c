#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: return the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t start = 0, end = step;
    size_t i;

    while (end < size && array[end] < value)
    {
        printf("Value checked array[%ld] = [%d]\n", start, array[start]);
        printf("Value checked array[%ld] = [%d]\n", end, array[end]);
        start = end;
        end += step;
    }

    printf("Value found between indexes [%ld] and [%ld]\n", start, end - 1);

    end = (end < size) ? end : size;

    for (i = start; i < end; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}

