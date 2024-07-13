#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void insertion_sort(int *array, int size)
{
    for (int j = 1; j < size; ++j)
    {
        int key = array[j];
        int i = j - 1;

        while (i >= 0 && array[i] > key)
        {
            array[i + 1] = array[i];
            --i;
        }

        array[i + 1] = key;
    }
}

// p <= q < r
void merge(int *array, int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;

    int *left_array = (int *)malloc((n1 + 1) * sizeof(int));
    int *right_array = (int *)malloc((n2 + 1) * sizeof(int));

    if (left_array == NULL || right_array == NULL)
    {
        fprintf(stderr, "Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }

    int i, j;

    for (i = 0; i < n1; ++i)
        left_array[i] = array[p + i];

    for (j = 0; j < n2; ++j)
        right_array[j] = array[q + 1 + j];

    left_array[n1] = INT_MAX;
    right_array[n2] = INT_MAX;

    i = 0;
    j = 0;

    for (int k = p; k <= r; ++k)
    {
        if (left_array[i] <= right_array[j])
            array[k] = left_array[i++];
        else
            array[k] = right_array[j++];
    }

    // free allocated memory
    free(left_array);
    free(right_array);
}

void merge_sort(int *array, int p, int r)
{
    if (p >= r) // recursion exit condition
        return;

    int q = (p + r) / 2;
    merge_sort(array, p, q);
    merge_sort(array, q + 1, r);
    merge(array, p, q, r);
}