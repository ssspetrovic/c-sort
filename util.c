#include <stdio.h>

void print_sort_header(const char* header)
{
    printf("===================== %s =====================\n", header);
}

void print_array(int array[], size_t length)
{
    printf("[");

    for (size_t i = 0; i < length; ++i)
        printf("%d, ", array[i]);

    printf("\b\b]\n");
}

void print_sort(int array[], size_t length, void (*sort)(int [], size_t))
{
    printf("\tArray before sorting:\t");
    print_array(array, length);

    sort(array, length);

    printf("\tArray after sorting:\t");
    print_array(array, length);
}