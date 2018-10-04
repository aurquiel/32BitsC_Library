#ifndef ERROR_H_INCLUDED
#define ERROR_H_INCLUDED

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

typedef enum {
    errorSizePrint = -101,          /*!< -101 indicating error of array size */
    errorTypePrint = -102           /*!< -101 indicating error of type of array */
} errorPrint;

typedef enum {
    errorSizeArray = -201,      /*!< -201 indicating error of array size */
    errorTypeArray = -202,      /*!< -201 indicating error of type of array */
    errorBoundaryLimits = -203, /*!< -201 indicating error boundary limits */
    errorNegativeNumberArray = -204  /*!< -501 indicating error negative number */
} errorArray;


typedef enum {
    errorSizeAllocator = -301,  /*!< -301 indicating error of array size */
    errorTypeAllocator = -302,  /*!< -302 indicating error of type of array */
    errorNoAllocate = -307      /*!< -307 indicating error of allocation */
} errorAllocator;

typedef enum {
    errorNoOpenFile = -401      /*!< -401 indicating error opening file */
} errorFile;

typedef enum {
    errorSizeArraySort = -501,  /*!< -501 indicating error of array size */
    errorTypeSort = -502        /*!< -502 indicating error of type of array */
} errorSort;

typedef enum {
    errorTypeAritmethic = -602,             /*!< -602 indicating error of type */
    errorNegativeNumberArtihmetic = -604    /*!< -604 indicating error negative number */
} errorAritmethic;

typedef enum {
    errorTypeSwap = -702              /*!< -702 indicating error of type */
} errorSwap;

void ErrorRaise(const uint32_t messageNumber, const char* fileName, const char* functionName, const uint32_t lineNumber);

#endif // ERROR_H_INCLUDED
