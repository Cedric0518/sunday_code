// sort.c
#include "sort.h"
#include <stdlib.h> // For malloc, free, and qsort
#include <string.h> // For memcpy

// Comparison function for qsort
static int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// Function to sort a table
int* sort_table(const int table[TABLE_SIZE]) {
    if (!table) return NULL;

    // Allocate memory for the sorted table
    int* sorted_table = (int*)malloc(TABLE_SIZE * sizeof(int));
    if (!sorted_table) return NULL;

    // Copy the original table into the sorted table
    memcpy(sorted_table, table, TABLE_SIZE * sizeof(int));

    // Sort the table
    qsort(sorted_table, TABLE_SIZE, sizeof(int), compare);

    return sorted_table;
}