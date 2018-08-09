#include "print.h"
#include "interchange.h"
#include "allocator.h"

int main(int argc, char *argv[])
{
    uint16_t myArray[] ={123,343,45,45};

    PrintArray(myArray,NumberOfArrayElements(myArray),unsignedInt16Pointer);

    char *miNombre = (char*)AllocatorCalloc(10,charPointer);
    strcpy(miNombre,"edgar");
    PrintArray(miNombre,strlen(miNombre),charPointer);

    char **miNombre22 = (char**)AllocatorCallocTwoDimension(10,charPointer);

    miNombre22[0] = (char*)AllocatorCalloc(10,charPointer);
    strcpy(miNombre22[0],"edgar");
    PrintArray(miNombre,strlen(miNombre22[0]),charPointer);

    return EXIT_SUCCESS;
}

