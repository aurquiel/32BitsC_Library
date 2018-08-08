#ifndef ERROR_H_INCLUDED
#define ERROR_H_INCLUDED

typedef enum {
    errorSizePrint = -101,
    errorTypePrint = -102
} errorPrint;

typedef enum {
    errorSizeInterchange = -201,
    errorTypeInterchange = -202
} errorInterchange;

typedef enum {
    errorSizeAllocator = -301,
    errorTypeAllocator = -302,
    errorNoAllocate = -303
} errorAllocator;

#endif // ERROR_H_INCLUDED
