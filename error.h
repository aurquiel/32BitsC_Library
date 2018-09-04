#ifndef ERROR_H_INCLUDED
#define ERROR_H_INCLUDED

typedef enum {
    errorSizePrint = -101,          /*!< -101 indicating error of array size */
    errorTypePrint = -102           /*!< -101 indicating error of type of array */
} errorPrint;

typedef enum {
    errorSizeArray = -201,    /*!< -201 indicating error of array size */
    errorTypeArray = -202     /*!< -201 indicating error of type of array */
} errorArray;


typedef enum {
    errorSizeAllocator = -301,  /*!< -301 indicating error of array size */
    errorTypeAllocator = -302,  /*!< -301 indicating error of type of array */
    errorNoAllocate = -303      /*!< -301 indicating error of allocation */
} errorAllocator;

typedef enum {
    errorNoOpenFile = -401      /*!< -401 indicating error opening file */
} errorFile;

#endif // ERROR_H_INCLUDED
