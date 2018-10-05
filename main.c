#include "print.h"
#include "array.h"
#include "allocator.h"
#include "sort.h"
#include "aritmethic.h"

int main()
{
    printf("Array Interchange Begin\n");
    char ArrayChar1[10] = {0,1,2,3,4,5,6,7,8,9};
    char ArrayChar2[10] = {10,11,12,13,14,15,16,17,18,19};
    printf("Array 1:\n");
    PrintArray(ArrayChar1,NumberOfArrayElements(ArrayChar1),CHAR);
    printf("Array 2:\n");
    PrintArray(ArrayChar2,NumberOfArrayElements(ArrayChar2),CHAR);
    ArrayInterchange(ArrayChar1,NumberOfArrayElements(ArrayChar1),ArrayChar2,NumberOfArrayElements(ArrayChar2),CHAR);
    printf("Array 1:\n");
    PrintArray(ArrayChar1,NumberOfArrayElements(ArrayChar1),CHAR);
    printf("Array 2:\n");
    PrintArray(ArrayChar2,NumberOfArrayElements(ArrayChar2),CHAR);

    int32_t ArrayINT32[10] = {-11,12,13,14,15,16,17,-18,19,20};
    int32_t Array2INT32[10] = {1,2,3,4,5,-6,7,8,-9,0};
    printf("Array 1:\n");
    PrintArray(ArrayINT32,NumberOfArrayElements(ArrayINT32),INT32);
    printf("Array 2:\n");
    PrintArray(Array2INT32,NumberOfArrayElements(Array2INT32),INT32);
    ArrayInterchange(ArrayINT32,NumberOfArrayElements(ArrayINT32),Array2INT32,NumberOfArrayElements(Array2INT32),INT32);
    printf("Array 1:\n");
    PrintArray(ArrayINT32,NumberOfArrayElements(ArrayINT32),INT32);
    printf("Array 2:\n");
    PrintArray(Array2INT32,NumberOfArrayElements(Array2INT32),INT32);

    int32_t ArrayUINT32[10] = {11,12,13,14,15,16,17,18,19,20};
    int32_t Array2UINT32[10] = {1,2,3,4,5,6,7,8,9,0};
    printf("Array 1:\n");
    PrintArray(ArrayUINT32,NumberOfArrayElements(ArrayUINT32),UNSIGNED_INT32);
    printf("Array 2:\n");
    PrintArray(Array2UINT32,NumberOfArrayElements(Array2UINT32),UNSIGNED_INT32);
    ArrayInterchange(ArrayUINT32,NumberOfArrayElements(ArrayUINT32),Array2UINT32,NumberOfArrayElements(Array2UINT32),UNSIGNED_INT32);
    printf("Array 1:\n");
    PrintArray(ArrayUINT32,NumberOfArrayElements(ArrayUINT32),UNSIGNED_INT32);
    printf("Array 2:\n");
    PrintArray(Array2UINT32,NumberOfArrayElements(Array2UINT32),UNSIGNED_INT32);

    float ArrayFloat1[10] = {0.3434,1.4545,2.65,3.34,4.8945,5.086,6.2347,7.898,8.479,9.354};
    float ArrayFloat2[10] = {10.10743,11.56589,12.57073,13.68974,14.34767,15.03746,16.09080,17.568798,18.8995342,19.784};
    printf("Array 1:\n");
    PrintArray(ArrayFloat1,NumberOfArrayElements(ArrayFloat1),FLOAT);
    printf("Array 2:\n");
    PrintArray(ArrayFloat2,NumberOfArrayElements(ArrayFloat2),FLOAT);
    ArrayInterchange(ArrayFloat1,NumberOfArrayElements(ArrayFloat1),ArrayFloat2,NumberOfArrayElements(ArrayFloat2),FLOAT);
    printf("Array 1:\n");
    PrintArray(ArrayFloat1,NumberOfArrayElements(ArrayFloat1),FLOAT);
    printf("Array 2:\n");
    PrintArray(ArrayFloat2,NumberOfArrayElements(ArrayFloat2),FLOAT);

    double ArrayDouble1[10] = {0.3434,1.4545,2.65,3.34,4.8945,5.086,6.2347,7.898,8.479,9.354};
    double ArrayDouble2[10] = {10.10743,11.56589,12.57073,13.68974,14.34767,15.03746,16.09080,17.568798,18.8995342,19.784};
    printf("Array 1:\n");
    PrintArray(ArrayDouble1,NumberOfArrayElements(ArrayDouble1),DOUBLE);
    printf("Array 2:\n");
    PrintArray(ArrayDouble2,NumberOfArrayElements(ArrayDouble2),DOUBLE);
    ArrayInterchange(ArrayDouble1,NumberOfArrayElements(ArrayDouble1),ArrayDouble2,NumberOfArrayElements(ArrayDouble2),DOUBLE);
    printf("Array 1:\n");
    PrintArray(ArrayDouble1,NumberOfArrayElements(ArrayDouble1),DOUBLE);
    printf("Array 2:\n");
    PrintArray(ArrayDouble2,NumberOfArrayElements(ArrayDouble2),DOUBLE);

    return EXIT_SUCCESS;
}

