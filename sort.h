#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

#include "error.h"
#include "header.h"
#include "allocator.h"
#include "array.h"
#include "radixSort.h"
#include <stdint.h>

void SortRadix(void *array, int64_t sizeArray, int8_t typeData);


#endif // SORT_H_INCLUDED
