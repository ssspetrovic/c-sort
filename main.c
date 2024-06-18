#include <stdio.h>
#include "sort.h"

int main()
{
    int arr[6] = { 5, 2, 4, 6, 1, 3 };
    insertion_sort(arr, 6);

    for (int i = 0; i < 6; ++i)
        printf("%d ", arr[i]);

    return 0;
}
