#ifndef ERROR_H_INCLUDED
#define ERROR_H_INCLUDED

/** \brief enum to enumerate the errors of print.c.
 *
 * \enum errorPrint
 *
 */
typedef enum {
    errorSizePrint = -101,          /*!< -101 indicating error of array size */
    errorTypePrint = -102           /*!< -101 indicating error of type of array */
} errorPrint;



/** \brief enum to enumerate the errors of interchange.c.
 *
 * \enum errorInterchange
 *
 */
typedef enum {
    errorSizeInterchange = -201,    /*!< -201 indicating error of array size */
    errorTypeInterchange = -202     /*!< -201 indicating error of type of array */
} errorInterchange;



/** \brief enum to enumerate the errors of allocator.c.
 *
 * \enum errorAllocator
 *
 */
typedef enum {
    errorSizeAllocator = -301,  /*!< -301 indicating error of array size */
    errorTypeAllocator = -302,  /*!< -301 indicating error of type of array */
    errorNoAllocate = -303      /*!< -301 indicating error of allocation */
} errorAllocator;



/** \brief enum to enumerate the errors of file.c.
 *
 * \enum errorFile
 *
 */
typedef enum {
    errorNoOpenFile = -401      /*!< -401 indicating error opening file */
} errorFile;

#endif // ERROR_H_INCLUDED
