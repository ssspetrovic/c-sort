#include <stdio.h>
#include "sort.h"

#define ARRAY_LEN 6

int main()
{
    int arr[6] = { 5, 2, 4, 6, 1, 3 };
    insertion_sort(arr, ARRAY_LEN);

    for (int i = 0; i < ARRAY_LEN; ++i)
        printf("%d ", arr[i]);

    return 0;
}
