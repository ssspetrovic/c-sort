#include <stdio.h>

void insertion_sort(int array[], int length)
{
    for (int j = 1; j < length; ++j)
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