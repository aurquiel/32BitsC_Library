#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED


/** \brief definition to obtain the number of elements belonging to an array, do not work with declarations like; char* = "str".
 *
 * \def NumberOfArrayElements(x)
 *
 */
#define NumberOfArrayElements(x) (sizeof (x) / sizeof (*x))



/** \brief enum to add bool type to the C programing language.
 *
 * \enum bool
 *
 */
#ifndef __cplusplus
    typedef enum {
        false = 0,              /*!< 0 indicating false */
        true = 1                /*!< 1 indicating true */
        } bool;
#endif



/** \brief enum to enumerate the type of pointers.
 *
 * \enum typesPointers
 *
 */
typedef enum {
    charPointer = 0,            /*!< 0 indicating char* */
    unsignedCharPointer = 1,    /*!< 1 indicating unsigned char* */
    int8Pointer = 2,            /*!< 2 indicating int8_t* */
    unsignedInt8Pointer = 3,    /*!< 3 indicating uint8_t* */
    int16Pointer = 4,           /*!< 4 indicating int16_t* */
    unsignedInt16Pointer = 5,   /*!< 5 indicating uint16_t* */
    int32Pointer = 6,           /*!< 6 indicating int32_t* */
    unsignedInt32Pointer = 7,   /*!< 7 indicating uint32_t* */
    int64Pointer = 8,           /*!< 8 indicating int64_t* */
    unsignedInt64Pointer = 9,   /*!< 9 indicating uint64_t* */
    floatPointer = 10,          /*!< 10 indicating float* */
    doublePointer = 11,         /*!< 11 indicating double* */
    structPointer = 12          /*!< 12 indicating struct* */
} typesPointers;


#endif // HEADER_H_INCLUDED
