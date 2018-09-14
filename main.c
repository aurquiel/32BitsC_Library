#include "print.h"
#include "array.h"
#include "allocator.h"

int main(int argc, char *argv[])
{
    int8_t numeros[] = {23,45,78,23};
    PrintArray(numeros,NumberOfArrayElements(numeros),INT8);
    ClearArray(numeros,NumberOfArrayElements(numeros),INT8);
    PrintArray(numeros,NumberOfArrayElements(numeros),INT8);

    int8_t numerosA[] = {23,45,78,23};
    int8_t numerosB[] = {11,21,31,41};
    PrintArray(numerosA,NumberOfArrayElements(numerosA),INT8);
    PrintArray(numerosB,NumberOfArrayElements(numerosB),INT8);
    InterchangeArrayGeneric(numerosA,NumberOfArrayElements(numerosA),numerosB,NumberOfArrayElements(numerosB),INT8);
    printf("hola\n");
    PrintArray(numerosA,NumberOfArrayElements(numerosA),INT8);
    PrintArray(numerosB,NumberOfArrayElements(numerosB),INT8);

    return EXIT_SUCCESS;
}

