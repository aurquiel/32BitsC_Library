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
    char pa[] = "deugdDD";
    SetArrayCharacter(pa,'v',NumberOfArrayElements(pa),CHAR);
    printf(pa);

    char a = 'e';
    char *pA = &a;
    char* whereis_d = (char*)FindArray(pa,pA,NumberOfArrayElements(pa),CHAR);
    printf(whereis_d);

    return EXIT_SUCCESS;
}

