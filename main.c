#include "print.h"
#include "array.h"
#include "allocator.h"
#include "sort.h"
#include "aritmethic.h"

void TestArrayInterchange(void)
{
    char Array1CHAR[10] = {0,-1,2,-3,4,-5,6,-7,8,-9};
    char Array2CHAR[10] = {10,-11,12,-13,14,-15,16,-17,18,-19};

    unsigned char Array1UCHAR[10] = {0,1,2,3,4,5,6,7,8,9};
    unsigned char Array2UCHAR[10] = {10,11,12,13,14,15,16,17,18,19};

    int8_t Array1INT8[10] = {0,-1,2,-3,4,-5,6,-7,8,-9};
    int8_t Array2INT8[10] = {10,-11,12,-13,14,-15,16,-17,18,-19};

    uint8_t Array1UINT8[10] = {0,1,2,3,4,5,6,7,8,9};
    uint8_t Array2UINT8[10] = {10,11,12,13,14,15,16,17,18,19};

    int16_t Array1INT16[10] = {0,-1,2,-3,4,-5,6,-7,8,-9};
    int16_t Array2INT16[10] = {10,-11,12,-13,14,-15,16,-17,18,-19};

    uint16_t Array1UINT16[10] = {0,1,2,3,4,5,6,7,8,9};
    uint16_t Array2UINT16[10] = {10,11,12,13,14,15,16,17,18,19};

    int32_t Array1INT32[10] = {0,-1,2,-3,4,-5,6,-7,8,-9};
    int32_t Array2INT32[10] = {10,-11,12,-13,14,-15,16,-17,18,-19};

    uint32_t Array1UINT32[10] = {0,1,2,3,4,5,6,7,8,9};
    uint32_t Array2UINT32[10] = {10,11,12,13,14,15,16,17,18,19};

    float Array1FLOAT[10] = {0.9,-1.8,2.7,-3.6,4.5,-5.4,6.3,-7.2,8.1,-9.0};
    float Array2FLOAT[10] = {10.0,-11.1,12.2,-13.3,14.4,-15.5,16.6,-17.7,18.8,-19.9};

    double Array1DOUBLE[10] = {0.9,-1.8,2.7,-3.6,4.5,-5.4,6.3,-7.2,8.1,-9.0};
    double Array2DOUBLE[10] = {10.0,-11.1,12.2,-13.3,14.4,-15.5,16.6,-17.7,18.8,-19.9};

    printf("-----TEST ArrayInterchange()-----\n");
    printf("\n");
    printf("CHAR ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1CHAR,SizeOfArray(Array1CHAR),CHAR);
    printf("Array 2:\n");
    PrintArray(Array2CHAR,SizeOfArray(Array2CHAR),CHAR);
    ArrayInterchange(Array1CHAR,SizeOfArray(Array1CHAR),Array2CHAR,SizeOfArray(Array2CHAR),50);
    printf("Array 1:\n");
    PrintArray(Array1CHAR,SizeOfArray(Array1CHAR),CHAR);
    printf("Array 2:\n");
    PrintArray(Array2CHAR,SizeOfArray(Array2CHAR),CHAR);
    printf("\n");

    printf("UNSIGNED CHAR ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UCHAR,SizeOfArray(Array1UCHAR),UNSIGNED_CHAR);
    printf("Array 2:\n");
    PrintArray(Array2UCHAR,SizeOfArray(Array2UCHAR),UNSIGNED_CHAR);
    ArrayInterchange(Array1UCHAR,SizeOfArray(Array1UCHAR),Array2UCHAR,SizeOfArray(Array2UCHAR),UNSIGNED_CHAR);
    printf("Array 1:\n");
    PrintArray(Array1UCHAR,SizeOfArray(Array1UCHAR),UNSIGNED_CHAR);
    printf("Array 2:\n");
    PrintArray(Array2UCHAR,SizeOfArray(Array2UCHAR),UNSIGNED_CHAR);
    printf("\n");

    printf("INT8 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1INT8,SizeOfArray(Array1INT8),INT8);
    printf("Array 2:\n");
    PrintArray(Array2INT8,SizeOfArray(Array2INT8),INT8);
    ArrayInterchange(Array1INT8,SizeOfArray(Array1INT8),Array2INT8,SizeOfArray(Array2INT8),INT8);
    printf("Array 1:\n");
    PrintArray(Array1INT8,SizeOfArray(Array1INT8),INT8);
    printf("Array 2:\n");
    PrintArray(Array2INT8,SizeOfArray(Array2INT8),INT8);
    printf("\n");

    printf("UNSIGNED INT8 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UINT8,SizeOfArray(Array1UINT8),UNSIGNED_INT8);
    printf("Array 2:\n");
    PrintArray(Array2UINT8,SizeOfArray(Array2UINT8),UNSIGNED_INT8);
    ArrayInterchange(Array1UINT8,SizeOfArray(Array1UINT8),Array2UINT8,SizeOfArray(Array2UINT8),UNSIGNED_INT8);
    printf("Array 1:\n");
    PrintArray(Array1UINT8,SizeOfArray(Array1UINT8),UNSIGNED_INT8);
    printf("Array 2:\n");
    PrintArray(Array2UINT8,SizeOfArray(Array2UINT8),UNSIGNED_INT8);
    printf("\n");

    printf("INT16 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1INT16,SizeOfArray(Array1INT16),INT16);
    printf("Array 2:\n");
    PrintArray(Array2INT16,SizeOfArray(Array2INT16),INT16);
    ArrayInterchange(Array1INT16,SizeOfArray(Array1INT16),Array2INT16,SizeOfArray(Array2INT16),INT16);
    printf("Array 1:\n");
    PrintArray(Array1INT16,SizeOfArray(Array1INT16),INT16);
    printf("Array 2:\n");
    PrintArray(Array2INT16,SizeOfArray(Array2INT16),INT16);
    printf("\n");

    printf("UNSIGNED INT16 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UINT16,SizeOfArray(Array1UINT16),UNSIGNED_INT16);
    printf("Array 2:\n");
    PrintArray(Array2UINT16,SizeOfArray(Array2UINT16),UNSIGNED_INT16);
    ArrayInterchange(Array1UINT16,SizeOfArray(Array1UINT16),Array2UINT16,SizeOfArray(Array2UINT16),UNSIGNED_INT16);
    printf("Array 1:\n");
    PrintArray(Array1UINT16,SizeOfArray(Array1UINT16),UNSIGNED_INT16);
    printf("Array 2:\n");
    PrintArray(Array2UINT16,SizeOfArray(Array2UINT16),UNSIGNED_INT16);
    printf("\n");

    printf("INT32 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1INT32,SizeOfArray(Array1INT32),INT32);
    printf("Array 2:\n");
    PrintArray(Array2INT32,SizeOfArray(Array2INT32),INT32);
    ArrayInterchange(Array1INT32,SizeOfArray(Array1INT32),Array2INT32,SizeOfArray(Array2INT32),INT32);
    printf("Array 1:\n");
    PrintArray(Array1INT32,SizeOfArray(Array1INT32),INT32);
    printf("Array 2:\n");
    PrintArray(Array2INT32,SizeOfArray(Array2INT32),INT32);
    printf("\n");

    printf("UNSIGNED INT32 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UINT32,SizeOfArray(Array1UINT32),UNSIGNED_INT32);
    printf("Array 2:\n");
    PrintArray(Array2UINT32,SizeOfArray(Array2UINT32),UNSIGNED_INT32);
    ArrayInterchange(Array1UINT32,SizeOfArray(Array1UINT32),Array2UINT32,SizeOfArray(Array2UINT32),UNSIGNED_INT32);
    printf("Array 1:\n");
    PrintArray(Array1UINT32,SizeOfArray(Array1UINT32),UNSIGNED_INT32);
    printf("Array 2:\n");
    PrintArray(Array2UINT32,SizeOfArray(Array2UINT32),UNSIGNED_INT32);
    printf("\n");

    printf("FLOAT ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1FLOAT,SizeOfArray(Array1FLOAT),FLOAT);
    printf("Array 2:\n");
    PrintArray(Array2FLOAT,SizeOfArray(Array2FLOAT),FLOAT);
    ArrayInterchange(Array1FLOAT,SizeOfArray(Array1FLOAT),Array2FLOAT,SizeOfArray(Array2FLOAT),FLOAT);
    printf("Array 1:\n");
    PrintArray(Array1FLOAT,SizeOfArray(Array1FLOAT),FLOAT);
    printf("Array 2:\n");
    PrintArray(Array2FLOAT,SizeOfArray(Array2FLOAT),FLOAT);
    printf("\n");

    printf("DOUBLE ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1DOUBLE,SizeOfArray(Array1DOUBLE),DOUBLE);
    printf("Array 2:\n");
    PrintArray(Array2DOUBLE,SizeOfArray(Array2DOUBLE),DOUBLE);
    ArrayInterchange(Array1DOUBLE,SizeOfArray(Array1DOUBLE),Array2DOUBLE,SizeOfArray(Array2DOUBLE),DOUBLE);
    printf("Array 1:\n");
    PrintArray(Array1DOUBLE,SizeOfArray(Array1DOUBLE),DOUBLE);
    printf("Array 2:\n");
    PrintArray(Array2DOUBLE,SizeOfArray(Array2DOUBLE),DOUBLE);
    printf("\n");
}

void TestArrayCopy(void)
{
    char Array1CHAR[10] = {0,-1,2,-3,4,-5,6,-7,8,-9};
    char Array2CHAR[10] = {10,-11,12,-13,14,-15,16,-17,18,-19};

    unsigned char Array1UCHAR[10] = {0,1,2,3,4,5,6,7,8,9};
    unsigned char Array2UCHAR[10] = {10,11,12,13,14,15,16,17,18,19};

    int8_t Array1INT8[10] = {0,-1,2,-3,4,-5,6,-7,8,-9};
    int8_t Array2INT8[10] = {10,-11,12,-13,14,-15,16,-17,18,-19};

    uint8_t Array1UINT8[10] = {0,1,2,3,4,5,6,7,8,9};
    uint8_t Array2UINT8[10] = {10,11,12,13,14,15,16,17,18,19};

    int16_t Array1INT16[10] = {0,-1,2,-3,4,-5,6,-7,8,-9};
    int16_t Array2INT16[10] = {10,-11,12,-13,14,-15,16,-17,18,-19};

    uint16_t Array1UINT16[10] = {0,1,2,3,4,5,6,7,8,9};
    uint16_t Array2UINT16[10] = {10,11,12,13,14,15,16,17,18,19};

    int32_t Array1INT32[10] = {0,-1,2,-3,4,-5,6,-7,8,-9};
    int32_t Array2INT32[10] = {10,-11,12,-13,14,-15,16,-17,18,-19};

    uint32_t Array1UINT32[10] = {0,1,2,3,4,5,6,7,8,9};
    uint32_t Array2UINT32[10] = {10,11,12,13,14,15,16,17,18,19};

    float Array1FLOAT[10] = {0.9,-1.8,2.7,-3.6,4.5,-5.4,6.3,-7.2,8.1,-9.0};
    float Array2FLOAT[10] = {10.0,-11.1,12.2,-13.3,14.4,-15.5,16.6,-17.7,18.8,-19.9};

    double Array1DOUBLE[10] = {0.9,-1.8,2.7,-3.6,4.5,-5.4,6.3,-7.2,8.1,-9.0};
    double Array2DOUBLE[10] = {10.0,-11.1,12.2,-13.3,14.4,-15.5,16.6,-17.7,18.8,-19.9};

    printf("-----TEST ArrayCopy()-----\n");
    printf("\n");
    printf("CHAR ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1CHAR,SizeOfArray(Array1CHAR),CHAR);
    printf("Array 2:\n");
    PrintArray(Array2CHAR,SizeOfArray(Array2CHAR),CHAR);
    ArrayCopy(Array1CHAR,SizeOfArray(Array1CHAR),Array2CHAR,SizeOfArray(Array2CHAR),CHAR);
    printf("Array 1:\n");
    PrintArray(Array1CHAR,SizeOfArray(Array1CHAR),CHAR);
    printf("Array 2:\n");
    PrintArray(Array2CHAR,SizeOfArray(Array2CHAR),CHAR);
    printf("\n");

    printf("UNSIGNED CHAR ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UCHAR,SizeOfArray(Array1UCHAR),UNSIGNED_CHAR);
    printf("Array 2:\n");
    PrintArray(Array2UCHAR,SizeOfArray(Array2UCHAR),UNSIGNED_CHAR);
    ArrayCopy(Array1UCHAR,SizeOfArray(Array1UCHAR),Array2UCHAR,SizeOfArray(Array2UCHAR),UNSIGNED_CHAR);
    printf("Array 1:\n");
    PrintArray(Array1UCHAR,SizeOfArray(Array1UCHAR),UNSIGNED_CHAR);
    printf("Array 2:\n");
    PrintArray(Array2UCHAR,SizeOfArray(Array2UCHAR),UNSIGNED_CHAR);
    printf("\n");

    printf("INT8 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1INT8,SizeOfArray(Array1INT8),INT8);
    printf("Array 2:\n");
    PrintArray(Array2INT8,SizeOfArray(Array2INT8),INT8);
    ArrayCopy(Array1INT8,SizeOfArray(Array1INT8),Array2INT8,SizeOfArray(Array2INT8),INT8);
    printf("Array 1:\n");
    PrintArray(Array1INT8,SizeOfArray(Array1INT8),INT8);
    printf("Array 2:\n");
    PrintArray(Array2INT8,SizeOfArray(Array2INT8),INT8);
    printf("\n");

    printf("UNSIGNED INT8 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UINT8,SizeOfArray(Array1UINT8),UNSIGNED_INT8);
    printf("Array 2:\n");
    PrintArray(Array2UINT8,SizeOfArray(Array2UINT8),UNSIGNED_INT8);
    ArrayCopy(Array1UINT8,SizeOfArray(Array1UINT8),Array2UINT8,SizeOfArray(Array2UINT8),UNSIGNED_INT8);
    printf("Array 1:\n");
    PrintArray(Array1UINT8,SizeOfArray(Array1UINT8),UNSIGNED_INT8);
    printf("Array 2:\n");
    PrintArray(Array2UINT8,SizeOfArray(Array2UINT8),UNSIGNED_INT8);
    printf("\n");

    printf("INT16 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1INT16,SizeOfArray(Array1INT16),INT16);
    printf("Array 2:\n");
    PrintArray(Array2INT16,SizeOfArray(Array2INT16),INT16);
    ArrayCopy(Array1INT16,SizeOfArray(Array1INT16),Array2INT16,SizeOfArray(Array2INT16),INT16);
    printf("Array 1:\n");
    PrintArray(Array1INT16,SizeOfArray(Array1INT16),INT16);
    printf("Array 2:\n");
    PrintArray(Array2INT16,SizeOfArray(Array2INT16),INT16);
    printf("\n");

    printf("UNSIGNED INT16 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UINT16,SizeOfArray(Array1UINT16),UNSIGNED_INT16);
    printf("Array 2:\n");
    PrintArray(Array2UINT16,SizeOfArray(Array2UINT16),UNSIGNED_INT16);
    ArrayCopy(Array1UINT16,SizeOfArray(Array1UINT16),Array2UINT16,SizeOfArray(Array2UINT16),UNSIGNED_INT16);
    printf("Array 1:\n");
    PrintArray(Array1UINT16,SizeOfArray(Array1UINT16),UNSIGNED_INT16);
    printf("Array 2:\n");
    PrintArray(Array2UINT16,SizeOfArray(Array2UINT16),UNSIGNED_INT16);
    printf("\n");

    printf("INT32 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1INT32,SizeOfArray(Array1INT32),INT32);
    printf("Array 2:\n");
    PrintArray(Array2INT32,SizeOfArray(Array2INT32),INT32);
    ArrayCopy(Array1INT32,SizeOfArray(Array1INT32),Array2INT32,SizeOfArray(Array2INT32),INT32);
    printf("Array 1:\n");
    PrintArray(Array1INT32,SizeOfArray(Array1INT32),INT32);
    printf("Array 2:\n");
    PrintArray(Array2INT32,SizeOfArray(Array2INT32),INT32);
    printf("\n");

    printf("UNSIGNED INT32 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UINT32,SizeOfArray(Array1UINT32),UNSIGNED_INT32);
    printf("Array 2:\n");
    PrintArray(Array2UINT32,SizeOfArray(Array2UINT32),UNSIGNED_INT32);
    ArrayCopy(Array1UINT32,SizeOfArray(Array1UINT32),Array2UINT32,SizeOfArray(Array2UINT32),UNSIGNED_INT32);
    printf("Array 1:\n");
    PrintArray(Array1UINT32,SizeOfArray(Array1UINT32),UNSIGNED_INT32);
    printf("Array 2:\n");
    PrintArray(Array2UINT32,SizeOfArray(Array2UINT32),UNSIGNED_INT32);
    printf("\n");

    printf("FLOAT ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1FLOAT,SizeOfArray(Array1FLOAT),FLOAT);
    printf("Array 2:\n");
    PrintArray(Array2FLOAT,SizeOfArray(Array2FLOAT),FLOAT);
    ArrayCopy(Array1FLOAT,SizeOfArray(Array1FLOAT),Array2FLOAT,SizeOfArray(Array2FLOAT),FLOAT);
    printf("Array 1:\n");
    PrintArray(Array1FLOAT,SizeOfArray(Array1FLOAT),FLOAT);
    printf("Array 2:\n");
    PrintArray(Array2FLOAT,SizeOfArray(Array2FLOAT),FLOAT);
    printf("\n");

    printf("DOUBLE ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1DOUBLE,SizeOfArray(Array1DOUBLE),DOUBLE);
    printf("Array 2:\n");
    PrintArray(Array2DOUBLE,SizeOfArray(Array2DOUBLE),DOUBLE);
    ArrayCopy(Array1DOUBLE,SizeOfArray(Array1DOUBLE),Array2DOUBLE,SizeOfArray(Array2DOUBLE),DOUBLE);
    printf("Array 1:\n");
    PrintArray(Array1DOUBLE,SizeOfArray(Array1DOUBLE),DOUBLE);
    printf("Array 2:\n");
    PrintArray(Array2DOUBLE,SizeOfArray(Array2DOUBLE),DOUBLE);
    printf("\n");
}

void TestArrayConcatenate(void)
{
    char Array1CHAR[20] = {0,-1,2,-3,4,-5,6,-7,8,-9};
    char Array2CHAR[10] = {10,-11,12,-13,14,-15,16,-17,18,-19};

    unsigned char Array1UCHAR[20] = {0,1,2,3,4,5,6,7,8,9};
    unsigned char Array2UCHAR[10] = {10,11,12,13,14,15,16,17,18,19};

    int8_t Array1INT8[20] = {0,-1,2,-3,4,-5,6,-7,8,-9};
    int8_t Array2INT8[10] = {10,-11,12,-13,14,-15,16,-17,18,-19};

    uint8_t Array1UINT8[20] = {0,1,2,3,4,5,6,7,8,9};
    uint8_t Array2UINT8[10] = {10,11,12,13,14,15,16,17,18,19};

    int16_t Array1INT16[20] = {0,-1,2,-3,4,-5,6,-7,8,-9};
    int16_t Array2INT16[10] = {10,-11,12,-13,14,-15,16,-17,18,-19};

    uint16_t Array1UINT16[20] = {0,1,2,3,4,5,6,7,8,9};
    uint16_t Array2UINT16[10] = {10,11,12,13,14,15,16,17,18,19};

    int32_t Array1INT32[20] = {0,-1,2,-3,4,-5,6,-7,8,-9};
    int32_t Array2INT32[10] = {10,-11,12,-13,14,-15,16,-17,18,-19};

    uint32_t Array1UINT32[20] = {0,1,2,3,4,5,6,7,8,9};
    uint32_t Array2UINT32[10] = {10,11,12,13,14,15,16,17,18,19};

    float Array1FLOAT[20] = {0.9,-1.8,2.7,-3.6,4.5,-5.4,6.3,-7.2,8.1,-9.0};
    float Array2FLOAT[10] = {10.0,-11.1,12.2,-13.3,14.4,-15.5,16.6,-17.7,18.8,-19.9};

    double Array1DOUBLE[20] = {0.9,-1.8,2.7,-3.6,4.5,-5.4,6.3,-7.2,8.1,-9.0};
    double Array2DOUBLE[10] = {10.0,-11.1,12.2,-13.3,14.4,-15.5,16.6,-17.7,18.8,-19.9};

    printf("-----TEST ArrayConcatenate()-----\n");
    printf("\n");
    printf("CHAR ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1CHAR,10,CHAR);
    printf("Array 2:\n");
    PrintArray(Array2CHAR,SizeOfArray(Array2CHAR),CHAR);
    ArrayConcatenate(Array1CHAR,10,Array2CHAR,10,CHAR);
    printf("Array 1:\n");
    PrintArray(Array1CHAR,SizeOfArray(Array1CHAR),CHAR);
    printf("Array 2:\n");
    PrintArray(Array2CHAR,SizeOfArray(Array2CHAR),CHAR);
    printf("\n");

    printf("UNSIGNED CHAR ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UCHAR,10,UNSIGNED_CHAR);
    printf("Array 2:\n");
    PrintArray(Array2UCHAR,SizeOfArray(Array2UCHAR),UNSIGNED_CHAR);
    ArrayConcatenate(Array1UCHAR,10,Array2UCHAR,10,UNSIGNED_CHAR);
    printf("Array 1:\n");
    PrintArray(Array1UCHAR,SizeOfArray(Array1UCHAR),UNSIGNED_CHAR);
    printf("Array 2:\n");
    PrintArray(Array2UCHAR,SizeOfArray(Array2UCHAR),UNSIGNED_CHAR);
    printf("\n");

    printf("INT8 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1INT8,10,INT8);
    printf("Array 2:\n");
    PrintArray(Array2INT8,SizeOfArray(Array2INT8),INT8);
    ArrayConcatenate(Array1INT8,10,Array2INT8,10,INT8);
    printf("Array 1:\n");
    PrintArray(Array1INT8,SizeOfArray(Array1INT8),INT8);
    printf("Array 2:\n");
    PrintArray(Array2INT8,SizeOfArray(Array2INT8),INT8);
    printf("\n");

    printf("UNSIGNED INT8 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UINT8,10,UNSIGNED_INT8);
    printf("Array 2:\n");
    PrintArray(Array2UINT8,SizeOfArray(Array2UINT8),UNSIGNED_INT8);
    ArrayConcatenate(Array1UINT8,10,Array2UINT8,10,UNSIGNED_INT8);
    printf("Array 1:\n");
    PrintArray(Array1UINT8,SizeOfArray(Array1UINT8),UNSIGNED_INT8);
    printf("Array 2:\n");
    PrintArray(Array2UINT8,SizeOfArray(Array2UINT8),UNSIGNED_INT8);
    printf("\n");

    printf("INT16 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1INT16,10,INT16);
    printf("Array 2:\n");
    PrintArray(Array2INT16,SizeOfArray(Array2INT16),INT16);
    ArrayConcatenate(Array1INT16,10,Array2INT16,10,INT16);
    printf("Array 1:\n");
    PrintArray(Array1INT16,SizeOfArray(Array1INT16),INT16);
    printf("Array 2:\n");
    PrintArray(Array2INT16,SizeOfArray(Array2INT16),INT16);
    printf("\n");

    printf("UNSIGNED INT16 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UINT16,10,UNSIGNED_INT16);
    printf("Array 2:\n");
    PrintArray(Array2UINT16,SizeOfArray(Array2UINT16),UNSIGNED_INT16);
    ArrayConcatenate(Array1UINT16,10,Array2UINT16,10,UNSIGNED_INT16);
    printf("Array 1:\n");
    PrintArray(Array1UINT16,SizeOfArray(Array1UINT16),UNSIGNED_INT16);
    printf("Array 2:\n");
    PrintArray(Array2UINT16,SizeOfArray(Array2UINT16),UNSIGNED_INT16);
    printf("\n");

    printf("INT32 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1INT32,10,INT32);
    printf("Array 2:\n");
    PrintArray(Array2INT32,SizeOfArray(Array2INT32),INT32);
    ArrayConcatenate(Array1INT32,10,Array2INT32,10,INT32);
    printf("Array 1:\n");
    PrintArray(Array1INT32,SizeOfArray(Array1INT32),INT32);
    printf("Array 2:\n");
    PrintArray(Array2INT32,SizeOfArray(Array2INT32),INT32);
    printf("\n");

    printf("UNSIGNED INT32 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UINT32,10,UNSIGNED_INT32);
    printf("Array 2:\n");
    PrintArray(Array2UINT32,SizeOfArray(Array2UINT32),UNSIGNED_INT32);
    ArrayConcatenate(Array1UINT32,10,Array2UINT32,10,UNSIGNED_INT32);
    printf("Array 1:\n");
    PrintArray(Array1UINT32,SizeOfArray(Array1UINT32),UNSIGNED_INT32);
    printf("Array 2:\n");
    PrintArray(Array2UINT32,SizeOfArray(Array2UINT32),UNSIGNED_INT32);
    printf("\n");

    printf("FLOAT ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1FLOAT,10,FLOAT);
    printf("Array 2:\n");
    PrintArray(Array2FLOAT,SizeOfArray(Array2FLOAT),FLOAT);
    ArrayConcatenate(Array1FLOAT,10,Array2FLOAT,10,FLOAT);
    printf("Array 1:\n");
    PrintArray(Array1FLOAT,SizeOfArray(Array1FLOAT),FLOAT);
    printf("Array 2:\n");
    PrintArray(Array2FLOAT,SizeOfArray(Array2FLOAT),FLOAT);
    printf("\n");

    printf("DOUBLE ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1DOUBLE,10,DOUBLE);
    printf("Array 2:\n");
    PrintArray(Array2DOUBLE,SizeOfArray(Array2DOUBLE),DOUBLE);
    ArrayConcatenate(Array1DOUBLE,10,Array2DOUBLE,10,DOUBLE);
    printf("Array 1:\n");
    PrintArray(Array1DOUBLE,SizeOfArray(Array1DOUBLE),DOUBLE);
    printf("Array 2:\n");
    PrintArray(Array2DOUBLE,SizeOfArray(Array2DOUBLE),DOUBLE);
    printf("\n");
}

void TestArrayClear(void)
{
    char Array1CHAR[10] = {0,-1,2,-3,4,-5,6,-7,8,-9};

    unsigned char Array1UCHAR[10] = {0,1,2,3,4,5,6,7,8,9};

    int8_t Array1INT8[10] = {0,-1,2,-3,4,-5,6,-7,8,-9};

    uint8_t Array1UINT8[10] = {0,1,2,3,4,5,6,7,8,9};

    int16_t Array1INT16[10] = {0,-1,2,-3,4,-5,6,-7,8,-9};

    uint16_t Array1UINT16[10] = {0,1,2,3,4,5,6,7,8,9};

    int32_t Array1INT32[10] = {0,-1,2,-3,4,-5,6,-7,8,-9};

    uint32_t Array1UINT32[10] = {0,1,2,3,4,5,6,7,8,9};

    float Array1FLOAT[10] = {0.9,-1.8,2.7,-3.6,4.5,-5.4,6.3,-7.2,8.1,-9.0};

    double Array1DOUBLE[10] = {0.9,-1.8,2.7,-3.6,4.5,-5.4,6.3,-7.2,8.1,-9.0};

    printf("-----TEST ArrayClear()-----\n");
    printf("\n");
    printf("CHAR ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1CHAR,SizeOfArray(Array1CHAR),CHAR);
    ArrayClear(Array1CHAR,SizeOfArray(Array1CHAR),CHAR);
    printf("Array 1:\n");
    PrintArray(Array1CHAR,SizeOfArray(Array1CHAR),CHAR);
    printf("\n");

    printf("UNSIGNED CHAR ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UCHAR,SizeOfArray(Array1UCHAR),UNSIGNED_CHAR);
    ArrayClear(Array1UCHAR,SizeOfArray(Array1UCHAR),UNSIGNED_CHAR);
    printf("Array 1:\n");
    PrintArray(Array1UCHAR,SizeOfArray(Array1UCHAR),UNSIGNED_CHAR);
    printf("\n");

    printf("INT8 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1INT8,SizeOfArray(Array1INT8),INT8);
    ArrayClear(Array1INT8,SizeOfArray(Array1INT8),INT8);
    printf("Array 1:\n");
    PrintArray(Array1INT8,SizeOfArray(Array1INT8),INT8);
    printf("\n");

    printf("UNSIGNED INT8 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UINT8,SizeOfArray(Array1UINT8),UNSIGNED_INT8);
    ArrayClear(Array1UINT8,SizeOfArray(Array1UINT8),UNSIGNED_INT8);
    printf("Array 1:\n");
    PrintArray(Array1UINT8,SizeOfArray(Array1UINT8),UNSIGNED_INT8);
    printf("\n");

    printf("INT16 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1INT16,SizeOfArray(Array1INT16),INT16);
    ArrayClear(Array1INT16,SizeOfArray(Array1INT16),INT16);
    printf("Array 1:\n");
    PrintArray(Array1INT16,SizeOfArray(Array1INT16),INT16);
    printf("\n");

    printf("UNSIGNED INT16 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UINT16,SizeOfArray(Array1UINT16),UNSIGNED_INT16);
    ArrayClear(Array1UINT16,SizeOfArray(Array1UINT16),UNSIGNED_INT16);
    printf("Array 1:\n");
    PrintArray(Array1UINT16,SizeOfArray(Array1UINT16),UNSIGNED_INT16);
    printf("\n");

    printf("INT32 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1INT32,SizeOfArray(Array1INT32),INT32);
    ArrayClear(Array1INT32,SizeOfArray(Array1INT32),INT32);
    printf("Array 1:\n");
    PrintArray(Array1INT32,SizeOfArray(Array1INT32),INT32);
    printf("\n");

    printf("UNSIGNED INT32 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UINT32,SizeOfArray(Array1UINT32),UNSIGNED_INT32);
    ArrayClear(Array1UINT32,SizeOfArray(Array1UINT32),UNSIGNED_INT32);
    printf("Array 1:\n");
    PrintArray(Array1UINT32,SizeOfArray(Array1UINT32),UNSIGNED_INT32);
    printf("\n");

    printf("FLOAT ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1FLOAT,SizeOfArray(Array1FLOAT),FLOAT);
    ArrayClear(Array1FLOAT,SizeOfArray(Array1FLOAT),FLOAT);
    printf("Array 1:\n");
    PrintArray(Array1FLOAT,SizeOfArray(Array1FLOAT),FLOAT);
    printf("\n");

    printf("DOUBLE ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1DOUBLE,SizeOfArray(Array1DOUBLE),DOUBLE);
    ArrayClear(Array1DOUBLE,SizeOfArray(Array1DOUBLE),DOUBLE);
    printf("Array 1:\n");
    PrintArray(Array1DOUBLE,SizeOfArray(Array1DOUBLE),DOUBLE);
    printf("\n");
}

void TestArraySet(void)
{
    char Array1CHAR[10] = {0,-1,2,-3,4,-5,6,-7,8,-9};
    char dataCHAR = -77;

    unsigned char Array1UCHAR[10] = {0,1,2,3,4,5,6,7,8,9};
    unsigned char dataUCHAR = 77;

    int8_t Array1INT8[10] = {0,-1,2,-3,4,-5,6,-7,8,-9};
    int8_t dataINT8 = -101;

    uint8_t Array1UINT8[10] = {0,1,2,3,4,5,6,7,8,9};
    uint8_t dataUINT8 = 101;

    int16_t Array1INT16[10] = {0,-1,2,-3,4,-5,6,-7,8,-9};
    int16_t dataINT16 = -2;

    uint16_t Array1UINT16[10] = {0,1,2,3,4,5,6,7,8,9};
    uint16_t dataUINT16 = 2;

    int32_t Array1INT32[10] = {0,-1,2,-3,4,-5,6,-7,8,-9};
    int32_t dataINT32 = 5000;

    uint32_t Array1UINT32[10] = {0,1,2,3,4,5,6,7,8,9};
    uint32_t dataUINT32 = 5000;

    float Array1FLOAT[10] = {0.9,-1.8,2.7,-3.6,4.5,-5.4,6.3,-7.2,8.1,-9.0};
    float dataFLOAT = 5543.54;

    double Array1DOUBLE[10] = {0.9,-1.8,2.7,-3.6,4.5,-5.4,6.3,-7.2,8.1,-9.0};
    double dataDOUBLE = 546.356745;

    printf("-----TEST ArraySet()-----\n");
    printf("\n");
    printf("CHAR ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1CHAR,SizeOfArray(Array1CHAR),CHAR);
    ArraySet(Array1CHAR,SizeOfArray(Array1CHAR),(char*)&dataCHAR,CHAR);
    printf("Array 1:\n");
    PrintArray(Array1CHAR,SizeOfArray(Array1CHAR),CHAR);
    printf("\n");

    printf("UNSIGNED CHAR ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UCHAR,SizeOfArray(Array1UCHAR),UNSIGNED_CHAR);
    ArraySet(Array1UCHAR,SizeOfArray(Array1UCHAR),(unsigned char*)&dataUCHAR,UNSIGNED_CHAR);
    printf("Array 1:\n");
    PrintArray(Array1UCHAR,SizeOfArray(Array1UCHAR),UNSIGNED_CHAR);
    printf("\n");

    printf("INT8 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1INT8,SizeOfArray(Array1INT8),INT8);
    ArraySet(Array1INT8,SizeOfArray(Array1INT8),(int8_t*)&dataINT8,INT8);
    printf("Array 1:\n");
    PrintArray(Array1INT8,SizeOfArray(Array1INT8),INT8);
    printf("\n");

    printf("UNSIGNED INT8 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UINT8,SizeOfArray(Array1UINT8),UNSIGNED_INT8);
    ArraySet(Array1UINT8,SizeOfArray(Array1UINT8),(uint8_t*)&dataUINT8,UNSIGNED_INT8);
    printf("Array 1:\n");
    PrintArray(Array1UINT8,SizeOfArray(Array1UINT8),UNSIGNED_INT8);
    printf("\n");

    printf("INT16 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1INT16,SizeOfArray(Array1INT16),INT16);
    ArraySet(Array1INT16,SizeOfArray(Array1INT16),(int8_t*)&dataINT16,INT16);
    printf("Array 1:\n");
    PrintArray(Array1INT16,SizeOfArray(Array1INT16),INT16);
    printf("\n");

    printf("UNSIGNED INT16 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UINT16,SizeOfArray(Array1UINT16),UNSIGNED_INT16);
    ArraySet(Array1UINT16,SizeOfArray(Array1UINT16),(uint16_t*)&dataUINT16,UNSIGNED_INT16);
    printf("Array 1:\n");
    PrintArray(Array1UINT16,SizeOfArray(Array1UINT16),UNSIGNED_INT16);
    printf("\n");

    printf("INT32 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1INT32,SizeOfArray(Array1INT32),INT32);
    ArraySet(Array1INT32,SizeOfArray(Array1INT32),(int32_t*)&dataINT32,INT32);
    printf("Array 1:\n");
    PrintArray(Array1INT32,SizeOfArray(Array1INT32),INT32);
    printf("\n");

    printf("UNSIGNED INT32 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UINT32,SizeOfArray(Array1UINT32),UNSIGNED_INT32);
    ArraySet(Array1UINT32,SizeOfArray(Array1UINT32),(uint32_t*)&dataUINT32,UNSIGNED_INT32);
    printf("Array 1:\n");
    PrintArray(Array1UINT32,SizeOfArray(Array1UINT32),UNSIGNED_INT32);
    printf("\n");

    printf("FLOAT ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1FLOAT,SizeOfArray(Array1FLOAT),FLOAT);
    ArraySet(Array1FLOAT,SizeOfArray(Array1FLOAT),(float*)&dataFLOAT,FLOAT);
    printf("Array 1:\n");
    PrintArray(Array1FLOAT,SizeOfArray(Array1FLOAT),FLOAT);
    printf("\n");

    printf("DOUBLE ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1DOUBLE,SizeOfArray(Array1DOUBLE),DOUBLE);
    ArraySet(Array1DOUBLE,SizeOfArray(Array1DOUBLE),(double*)&dataDOUBLE,DOUBLE);
    printf("Array 1:\n");
    PrintArray(Array1DOUBLE,SizeOfArray(Array1DOUBLE),DOUBLE);
    printf("\n");
}

int main()
{
    TestArrayInterchange();
    TestArrayCopy();
    TestArrayConcatenate();
    TestArrayClear();
    TestArraySet();

    return EXIT_SUCCESS;
}

