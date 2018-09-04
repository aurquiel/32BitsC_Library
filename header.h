#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#define FALSE 0
#define TRUE 1

#define EMPTY '\0'

#define CHAR 1
#define UNSIGNED_CHAR 2
#define INT8 3
#define UNSIGNED_INT8 4
#define INT16 5
#define UNSIGNED_INT16 6
#define INT32 7
#define UNSIGNED_INT32 8
#define INT64 9
#define UNSIGNED_INT64 10
#define FLOAT 11
#define DOUBLE 12
#define STRUCT 13

#define POINTER_CHAR 1
#define POINTER_UNSIGNED_CHAR 2
#define POINTER_INT8 3
#define POINTER_UNSIGNED_INT8 4
#define POINTER_INT16 5
#define POINTER_UNSIGNED_INT16 6
#define POINTER_INT32 7
#define POINTER_UNSIGNED_INT32 8
#define POINTER_INT64 9
#define POINTER_UNSIGNED_INT64 10
#define POINTER_FLOAT 11
#define POINTER_DOUBLE 12
#define POINTER_STRUCT 13

#define NumberOfArrayElements(x) (sizeof (x) / sizeof (*x))

#endif // HEADER_H_INCLUDED
