#include "print.h"
#include "array.h"
#include "allocator.h"

int main(int argc, char *argv[])
{
    uint16_t myArray[] = {123,343,45,45};

    PrintArray(myArray,NumberOfArrayElements(myArray),POINTER_UNSIGNED_INT16);

    char *miNombre = (char*)CallocAllocator(10,POINTER_CHAR);
    strcpy(miNombre,"edgar");
    PrintArray(miNombre,strlen(miNombre),POINTER_CHAR);

    char **miNombre22 = (char**)CallocAllocatorTwoDimension(10,POINTER_CHAR);

    miNombre22[0] = (char*)CallocAllocator(10,POINTER_CHAR);
    strcpy(miNombre22[0],"Sasha");
    PrintArray(miNombre22[0],strlen(miNombre22[0]),POINTER_CHAR);

    miNombre22[1] = (char*)CallocAllocator(10,POINTER_CHAR);
    strcpy(miNombre22[1],"luis");
    PrintArray(miNombre22[1],strlen(miNombre22[1]),POINTER_CHAR);

    Print64int((int64_t)234236984893264);

    unsigned char mensaje[50] = "hola";

    ConcatenateCharArray(mensaje, ", como estas?", UNSIGNED_CHAR);
    PrintArray(mensaje, NumberOfArrayElements(mensaje),POINTER_UNSIGNED_CHAR);

    unsigned char mensajeDos[50];

    CopyArray(mensajeDos, mensaje, NumberOfArrayElements(mensaje), UNSIGNED_CHAR);
    PrintArray(mensajeDos, NumberOfArrayElements(mensajeDos),POINTER_UNSIGNED_CHAR);

    printf("\n");
    char testArray[50];
    char a = 'a';
    char *pA = &a;
    SetArray(testArray,pA,NumberOfArrayElements(testArray), CHAR);
    EndArrayChar(testArray,NumberOfArrayElements(testArray), CHAR);
    printf(testArray);

    ClearArray(testArray,NumberOfArrayElements(testArray),CHAR);
    printf(testArray);

    printf("\n");
    CopyArray(testArray, "hola mundo", NumberOfArrayElements(testArray), CHAR);
    printf(testArray);

    printf("\n");
    char c = 'u';
    char *pC = &c;

    char* whereis_u = (char*)FindArray(testArray,pC,NumberOfArrayElements(testArray),CHAR);
    if(whereis_u!=NULL)
        printf(whereis_u);
    else
        printf("\n%d",whereis_u);

    int32_t numbers[] = {234,5445,4534,435345,435,45,45345,435435,453453};

    printf("\n");
    int32_t newNumber = 10;
    int32_t *PnewNumber = &newNumber;
    SetArray(numbers,PnewNumber,NumberOfArrayElements(numbers),INT32);
    PrintArray(numbers,NumberOfArrayElements(numbers),POINTER_INT32);

    return EXIT_SUCCESS;
}

