#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sort.h"
#include "util.h"

char *get_t_algo_str(t_algo algo)
{
    if (algo == INSERTION)
        return "INSERTION";
    else if (algo == MERGE)
        return "MERGE";
    else
        return NULL;
}

void print_sort_header(const char *header)
{
    printf("===================== %s =====================\n", header);
}

void print_array(int *array, int size)
{
    printf("[");
    for (int i = 0; i < size; ++i)
    {
        printf("%d", array[i]);
        if (i < size - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
}

void print_sort(int *array, int size, t_algo algo)
{
    if (get_t_algo_str(algo) == NULL)
    {
        fprintf(stderr, "Invalid algorithm provided!\n");
        return;
    }

    int *copy_array = (int *)malloc(size * sizeof(int));
    if (copy_array == NULL)
    {
        fprintf(stderr, "Failed to allocate memory for the array copy!\n");
        return;
    }

    memcpy(copy_array, array, size * sizeof(int));

    print_sort_header(get_t_algo_str(algo));
    printf("\tArray before sorting:\t");
    print_array(copy_array, size);

    switch (algo)
    {
    case INSERTION:
        insertion_sort(copy_array, size);
        break;
    case MERGE:
        merge_sort(copy_array, 0, size - 1);
        break;
    default:
        fprintf(stderr, "Invalid algorithm type!\n");
        return;
    }

    printf("\tArray after sorting:\t");
    print_array(copy_array, size);
    print_sort_header(get_t_algo_str(algo));
    puts("");
}
