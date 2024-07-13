#ifndef UTIL_H
#define UTIL_H

typedef enum
{
    INSERTION = 0,
    MERGE
} t_algo;

void print_array(int *array, int size);
void print_sort_header(const char *header);
void print_sort(int *array, int size, t_algo algo);

#endif // UTIL_H