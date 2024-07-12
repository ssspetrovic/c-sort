#include <stdio.h>

void print_sort_header(const char* header)
{
    printf("===================== %s =====================\n", header);
}

void print_array(int array[], int size)
{
    printf("[");

    for (int i = 0; i < size; ++i)
        printf("%d, ", array[i]);

    printf("\b\b]\n");
}

void print_sort(int array[], int size, void (*sort)(int array[], int size))
{
    printf("\tArray before sorting:\t");
    print_array(array, size);

    sort(array, size);

    printf("\tArray after sorting:\t");
    print_array(array, size);
}