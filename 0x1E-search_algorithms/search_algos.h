#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

/** Libraries **/
#include <stdio.h>
#include <stdlib.h>

/** Functions **/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/**Utilities**/
int recursive_search(int *array, size_t size, int value);

#endif
