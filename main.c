#include <stdio.h>
#include "sort.h"
#include "util.h"

#define ARRAY_LEN 6

int array[6] = {5, 2, 4, 6, 1, 3};

int main()
{
    print_sort_header("INSERTION SORT");
    print_sort(array, ARRAY_LEN, insertion_sort);
    print_sort_header("INSERTION SORT");

    return 0;
}
