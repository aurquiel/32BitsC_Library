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

    printf("-----TEST ArrayIntercange()-----\n");
    printf("\n");
    printf("CHAR ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1CHAR,NumberOfArrayElements(Array1CHAR),CHAR);
    printf("Array 2:\n");
    PrintArray(Array2CHAR,NumberOfArrayElements(Array2CHAR),CHAR);
    ArrayInterchange(Array1CHAR,NumberOfArrayElements(Array1CHAR),Array2CHAR,NumberOfArrayElements(Array2CHAR),50);
    printf("Array 1:\n");
    PrintArray(Array1CHAR,NumberOfArrayElements(Array1CHAR),CHAR);
    printf("Array 2:\n");
    PrintArray(Array2CHAR,NumberOfArrayElements(Array2CHAR),CHAR);
    printf("\n");

    printf("UNSIGNED CHAR ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UCHAR,NumberOfArrayElements(Array1UCHAR),UNSIGNED_CHAR);
    printf("Array 2:\n");
    PrintArray(Array2UCHAR,NumberOfArrayElements(Array2UCHAR),UNSIGNED_CHAR);
    ArrayInterchange(Array1UCHAR,NumberOfArrayElements(Array1UCHAR),Array2UCHAR,NumberOfArrayElements(Array2UCHAR),UNSIGNED_CHAR);
    printf("Array 1:\n");
    PrintArray(Array1UCHAR,NumberOfArrayElements(Array1UCHAR),UNSIGNED_CHAR);
    printf("Array 2:\n");
    PrintArray(Array2UCHAR,NumberOfArrayElements(Array2UCHAR),UNSIGNED_CHAR);
    printf("\n");

    printf("INT8 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1INT8,NumberOfArrayElements(Array1INT8),INT8);
    printf("Array 2:\n");
    PrintArray(Array2INT8,NumberOfArrayElements(Array2INT8),INT8);
    ArrayInterchange(Array1INT8,NumberOfArrayElements(Array1INT8),Array2INT8,NumberOfArrayElements(Array2INT8),INT8);
    printf("Array 1:\n");
    PrintArray(Array1INT8,NumberOfArrayElements(Array1INT8),INT8);
    printf("Array 2:\n");
    PrintArray(Array2INT8,NumberOfArrayElements(Array2INT8),INT8);
    printf("\n");

    printf("UNSIGNED INT8 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UINT8,NumberOfArrayElements(Array1UINT8),UNSIGNED_INT8);
    printf("Array 2:\n");
    PrintArray(Array2UINT8,NumberOfArrayElements(Array2UINT8),UNSIGNED_INT8);
    ArrayInterchange(Array1UINT8,NumberOfArrayElements(Array1UINT8),Array2UINT8,NumberOfArrayElements(Array2UINT8),UNSIGNED_INT8);
    printf("Array 1:\n");
    PrintArray(Array1UINT8,NumberOfArrayElements(Array1UINT8),UNSIGNED_INT8);
    printf("Array 2:\n");
    PrintArray(Array2UINT8,NumberOfArrayElements(Array2UINT8),UNSIGNED_INT8);
    printf("\n");

    printf("INT16 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1INT16,NumberOfArrayElements(Array1INT16),INT16);
    printf("Array 2:\n");
    PrintArray(Array2INT16,NumberOfArrayElements(Array2INT16),INT16);
    ArrayInterchange(Array1INT16,NumberOfArrayElements(Array1INT16),Array2INT16,NumberOfArrayElements(Array2INT16),INT16);
    printf("Array 1:\n");
    PrintArray(Array1INT16,NumberOfArrayElements(Array1INT16),INT16);
    printf("Array 2:\n");
    PrintArray(Array2INT16,NumberOfArrayElements(Array2INT16),INT16);
    printf("\n");

    printf("UNSIGNED INT16 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UINT16,NumberOfArrayElements(Array1UINT16),UNSIGNED_INT16);
    printf("Array 2:\n");
    PrintArray(Array2UINT16,NumberOfArrayElements(Array2UINT16),UNSIGNED_INT16);
    ArrayInterchange(Array1UINT16,NumberOfArrayElements(Array1UINT16),Array2UINT16,NumberOfArrayElements(Array2UINT16),UNSIGNED_INT16);
    printf("Array 1:\n");
    PrintArray(Array1UINT16,NumberOfArrayElements(Array1UINT16),UNSIGNED_INT16);
    printf("Array 2:\n");
    PrintArray(Array2UINT16,NumberOfArrayElements(Array2UINT16),UNSIGNED_INT16);
    printf("\n");

    printf("INT32 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1INT32,NumberOfArrayElements(Array1INT32),INT32);
    printf("Array 2:\n");
    PrintArray(Array2INT32,NumberOfArrayElements(Array2INT32),INT32);
    ArrayInterchange(Array1INT32,NumberOfArrayElements(Array1INT32),Array2INT32,NumberOfArrayElements(Array2INT32),INT32);
    printf("Array 1:\n");
    PrintArray(Array1INT32,NumberOfArrayElements(Array1INT32),INT32);
    printf("Array 2:\n");
    PrintArray(Array2INT32,NumberOfArrayElements(Array2INT32),INT32);
    printf("\n");

    printf("UNSIGNED INT32 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UINT32,NumberOfArrayElements(Array1UINT32),UNSIGNED_INT32);
    printf("Array 2:\n");
    PrintArray(Array2UINT32,NumberOfArrayElements(Array2UINT32),UNSIGNED_INT32);
    ArrayInterchange(Array1UINT32,NumberOfArrayElements(Array1UINT32),Array2UINT32,NumberOfArrayElements(Array2UINT32),UNSIGNED_INT32);
    printf("Array 1:\n");
    PrintArray(Array1UINT32,NumberOfArrayElements(Array1UINT32),UNSIGNED_INT32);
    printf("Array 2:\n");
    PrintArray(Array2UINT32,NumberOfArrayElements(Array2UINT32),UNSIGNED_INT32);
    printf("\n");

    printf("FLOAT ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1FLOAT,NumberOfArrayElements(Array1FLOAT),FLOAT);
    printf("Array 2:\n");
    PrintArray(Array2FLOAT,NumberOfArrayElements(Array2FLOAT),FLOAT);
    ArrayInterchange(Array1FLOAT,NumberOfArrayElements(Array1FLOAT),Array2FLOAT,NumberOfArrayElements(Array2FLOAT),FLOAT);
    printf("Array 1:\n");
    PrintArray(Array1FLOAT,NumberOfArrayElements(Array1FLOAT),FLOAT);
    printf("Array 2:\n");
    PrintArray(Array2FLOAT,NumberOfArrayElements(Array2FLOAT),FLOAT);
    printf("\n");

    printf("DOUBLE ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1DOUBLE,NumberOfArrayElements(Array1DOUBLE),DOUBLE);
    printf("Array 2:\n");
    PrintArray(Array2DOUBLE,NumberOfArrayElements(Array2DOUBLE),DOUBLE);
    ArrayInterchange(Array1DOUBLE,NumberOfArrayElements(Array1DOUBLE),Array2DOUBLE,NumberOfArrayElements(Array2DOUBLE),DOUBLE);
    printf("Array 1:\n");
    PrintArray(Array1DOUBLE,NumberOfArrayElements(Array1DOUBLE),DOUBLE);
    printf("Array 2:\n");
    PrintArray(Array2DOUBLE,NumberOfArrayElements(Array2DOUBLE),DOUBLE);
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

    printf("-----TEST ArrayCopy-----()\n");
    printf("\n");
    printf("CHAR ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1CHAR,NumberOfArrayElements(Array1CHAR),CHAR);
    printf("Array 2:\n");
    PrintArray(Array2CHAR,NumberOfArrayElements(Array2CHAR),CHAR);
    ArrayCopy(Array1CHAR,NumberOfArrayElements(Array1CHAR),Array2CHAR,NumberOfArrayElements(Array2CHAR),CHAR);
    printf("Array 1:\n");
    PrintArray(Array1CHAR,NumberOfArrayElements(Array1CHAR),CHAR);
    printf("Array 2:\n");
    PrintArray(Array2CHAR,NumberOfArrayElements(Array2CHAR),CHAR);
    printf("\n");

    printf("UNSIGNED CHAR ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UCHAR,NumberOfArrayElements(Array1UCHAR),UNSIGNED_CHAR);
    printf("Array 2:\n");
    PrintArray(Array2UCHAR,NumberOfArrayElements(Array2UCHAR),UNSIGNED_CHAR);
    ArrayCopy(Array1UCHAR,NumberOfArrayElements(Array1UCHAR),Array2UCHAR,NumberOfArrayElements(Array2UCHAR),UNSIGNED_CHAR);
    printf("Array 1:\n");
    PrintArray(Array1UCHAR,NumberOfArrayElements(Array1UCHAR),UNSIGNED_CHAR);
    printf("Array 2:\n");
    PrintArray(Array2UCHAR,NumberOfArrayElements(Array2UCHAR),UNSIGNED_CHAR);
    printf("\n");

    printf("INT8 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1INT8,NumberOfArrayElements(Array1INT8),INT8);
    printf("Array 2:\n");
    PrintArray(Array2INT8,NumberOfArrayElements(Array2INT8),INT8);
    ArrayCopy(Array1INT8,NumberOfArrayElements(Array1INT8),Array2INT8,NumberOfArrayElements(Array2INT8),INT8);
    printf("Array 1:\n");
    PrintArray(Array1INT8,NumberOfArrayElements(Array1INT8),INT8);
    printf("Array 2:\n");
    PrintArray(Array2INT8,NumberOfArrayElements(Array2INT8),INT8);
    printf("\n");

    printf("UNSIGNED INT8 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UINT8,NumberOfArrayElements(Array1UINT8),UNSIGNED_INT8);
    printf("Array 2:\n");
    PrintArray(Array2UINT8,NumberOfArrayElements(Array2UINT8),UNSIGNED_INT8);
    ArrayCopy(Array1UINT8,NumberOfArrayElements(Array1UINT8),Array2UINT8,NumberOfArrayElements(Array2UINT8),UNSIGNED_INT8);
    printf("Array 1:\n");
    PrintArray(Array1UINT8,NumberOfArrayElements(Array1UINT8),UNSIGNED_INT8);
    printf("Array 2:\n");
    PrintArray(Array2UINT8,NumberOfArrayElements(Array2UINT8),UNSIGNED_INT8);
    printf("\n");

    printf("INT16 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1INT16,NumberOfArrayElements(Array1INT16),INT16);
    printf("Array 2:\n");
    PrintArray(Array2INT16,NumberOfArrayElements(Array2INT16),INT16);
    ArrayCopy(Array1INT16,NumberOfArrayElements(Array1INT16),Array2INT16,NumberOfArrayElements(Array2INT16),INT16);
    printf("Array 1:\n");
    PrintArray(Array1INT16,NumberOfArrayElements(Array1INT16),INT16);
    printf("Array 2:\n");
    PrintArray(Array2INT16,NumberOfArrayElements(Array2INT16),INT16);
    printf("\n");

    printf("UNSIGNED INT16 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UINT16,NumberOfArrayElements(Array1UINT16),UNSIGNED_INT16);
    printf("Array 2:\n");
    PrintArray(Array2UINT16,NumberOfArrayElements(Array2UINT16),UNSIGNED_INT16);
    ArrayCopy(Array1UINT16,NumberOfArrayElements(Array1UINT16),Array2UINT16,NumberOfArrayElements(Array2UINT16),UNSIGNED_INT16);
    printf("Array 1:\n");
    PrintArray(Array1UINT16,NumberOfArrayElements(Array1UINT16),UNSIGNED_INT16);
    printf("Array 2:\n");
    PrintArray(Array2UINT16,NumberOfArrayElements(Array2UINT16),UNSIGNED_INT16);
    printf("\n");

    printf("INT32 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1INT32,NumberOfArrayElements(Array1INT32),INT32);
    printf("Array 2:\n");
    PrintArray(Array2INT32,NumberOfArrayElements(Array2INT32),INT32);
    ArrayCopy(Array1INT32,NumberOfArrayElements(Array1INT32),Array2INT32,NumberOfArrayElements(Array2INT32),INT32);
    printf("Array 1:\n");
    PrintArray(Array1INT32,NumberOfArrayElements(Array1INT32),INT32);
    printf("Array 2:\n");
    PrintArray(Array2INT32,NumberOfArrayElements(Array2INT32),INT32);
    printf("\n");

    printf("UNSIGNED INT32 ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1UINT32,NumberOfArrayElements(Array1UINT32),UNSIGNED_INT32);
    printf("Array 2:\n");
    PrintArray(Array2UINT32,NumberOfArrayElements(Array2UINT32),UNSIGNED_INT32);
    ArrayCopy(Array1UINT32,NumberOfArrayElements(Array1UINT32),Array2UINT32,NumberOfArrayElements(Array2UINT32),UNSIGNED_INT32);
    printf("Array 1:\n");
    PrintArray(Array1UINT32,NumberOfArrayElements(Array1UINT32),UNSIGNED_INT32);
    printf("Array 2:\n");
    PrintArray(Array2UINT32,NumberOfArrayElements(Array2UINT32),UNSIGNED_INT32);
    printf("\n");

    printf("FLOAT ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1FLOAT,NumberOfArrayElements(Array1FLOAT),FLOAT);
    printf("Array 2:\n");
    PrintArray(Array2FLOAT,NumberOfArrayElements(Array2FLOAT),FLOAT);
    ArrayCopy(Array1FLOAT,NumberOfArrayElements(Array1FLOAT),Array2FLOAT,NumberOfArrayElements(Array2FLOAT),FLOAT);
    printf("Array 1:\n");
    PrintArray(Array1FLOAT,NumberOfArrayElements(Array1FLOAT),FLOAT);
    printf("Array 2:\n");
    PrintArray(Array2FLOAT,NumberOfArrayElements(Array2FLOAT),FLOAT);
    printf("\n");

    printf("DOUBLE ARRAY\n");
    printf("Array 1:\n");
    PrintArray(Array1DOUBLE,NumberOfArrayElements(Array1DOUBLE),DOUBLE);
    printf("Array 2:\n");
    PrintArray(Array2DOUBLE,NumberOfArrayElements(Array2DOUBLE),DOUBLE);
    ArrayCopy(Array1DOUBLE,NumberOfArrayElements(Array1DOUBLE),Array2DOUBLE,NumberOfArrayElements(Array2DOUBLE),DOUBLE);
    printf("Array 1:\n");
    PrintArray(Array1DOUBLE,NumberOfArrayElements(Array1DOUBLE),DOUBLE);
    printf("Array 2:\n");
    PrintArray(Array2DOUBLE,NumberOfArrayElements(Array2DOUBLE),DOUBLE);
    printf("\n");
}

int main()
{
    TestArrayInterchange();
    TestArrayCopy();
    return EXIT_SUCCESS;
}

