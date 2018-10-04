#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#define FALSE 0
#define TRUE 1

#define EMPTY_ESCAPE '\0'

#define ZERO 0

#define NATURAL_NUMBERS 10

#define CHAR 1
#define UNSIGNED_CHAR 2
#define INT8 3
#define UNSIGNED_INT8 4
#define INT16 5
#define UNSIGNED_INT16 6
#define INT32 7
#define UNSIGNED_INT32 8
#define FLOAT 9
#define DOUBLE 10
#define STRUCT 11

#define NumberOfArrayElements(x) (sizeof (x) / sizeof (*x))

#endif // HEADER_H_INCLUDED
