#ifndef RADIXSORT_H_INCLUDED
#define RADIXSORT_H_INCLUDED

#define RADIX_SORT_OPERATIONS(ARRAY,SIZE_ARRAY,TYPE,TYPE_DATA)                              \
{                                                                                           \
    TYPE *repetitionsArray = (TYPE*)AllocatorCalloc(NATURAL_NUMBERS,TYPE_DATA);             \
    TYPE *temporaryArray = (TYPE*)AllocatorCalloc(SIZE_ARRAY,TYPE_DATA);                    \
    TYPE maxValue = *((TYPE*)ArrayFindMaxValue(ARRAY,SIZE_ARRAY,TYPE_DATA));                \
    int64_t divisor = 1;                                                                    \
                                                                                            \
    while( (maxValue/divisor) > 0)                                                          \
    {                                                                                       \
        ArrayClear(repetitionsArray,NATURAL_NUMBERS,TYPE_DATA);                             \
        for(int64_t i = 0; i < SIZE_ARRAY; i++)                                             \
        {                                                                                   \
            repetitionsArray[ (int64_t)( ((TYPE*)ARRAY)[i] / divisor) % 10]++;              \
        }                                                                                   \
                                                                                            \
        for(int64_t i = 1; i < NATURAL_NUMBERS; i++)                                        \
        {                                                                                   \
            repetitionsArray[i] += repetitionsArray[i-1];                                   \
        }                                                                                   \
                                                                                            \
        for(int64_t i = (SIZE_ARRAY - 1); i >= 0; i--)                                      \
        {                                                                                   \
            int64_t aux = --repetitionsArray[ (int64_t)(((TYPE*)ARRAY)[i] / divisor) % 10]; \
            temporaryArray[aux] = ((TYPE*)ARRAY)[i];                                        \
        }                                                                                   \
        divisor *= 10;                                                                      \
        ArrayCopy(ARRAY,SIZE_ARRAY,temporaryArray,SIZE_ARRAY,TYPE_DATA);                    \
    }                                                                                       \
    AllocatorFree(repetitionsArray);                                                        \
    AllocatorFree(temporaryArray);                                                          \
}

#endif // RADIXSORT_H_INCLUDED
