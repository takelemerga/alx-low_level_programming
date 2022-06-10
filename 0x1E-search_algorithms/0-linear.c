#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
    int i = 0;
    while (size > 0)
    {
        if (array[i] != value)
        {
            printf("Value checked array[%d] = [%d]\n", i, array[i]);
        }
        else
        {
            printf("Value checked array[%d] = [%d]\n", i, value);
            return i;
        }
        i++;
        size--;
    }
    return -1;
}
