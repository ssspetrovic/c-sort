#include <stdio.h>

#include "sort.h"
#include "util.h"

#define ARRAY_LEN 6

int main()
{
    int array[ARRAY_LEN] = {5, 2, 4, 6, 1, 3};

    // Test insertion sort
    print_sort(array, ARRAY_LEN, INSERTION);

    // Test merge sort
    print_sort(array, ARRAY_LEN, MERGE);

    return 0;
}