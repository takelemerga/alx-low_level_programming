#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
    int k = 0;
    while (size > 0)
    {
        if (array[k] != value)
        {
            printf("Value checked array[%d] = [%d]\n", k, array[k]);
        }
        else
        {
            printf("Value checked array[%d] = [%d]\n", k, value);
            return k;
        }
        k++;
        size--;
    }
    return -1;
}
