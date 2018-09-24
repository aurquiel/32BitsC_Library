#include "print.h"
#include "array.h"
#include "allocator.h"

int main()
{
    int8_t numeros[] = {23,45,78,23};
    PrintArray(numeros,NumberOfArrayElements(numeros),INT8);
    ClearArray(numeros,NumberOfArrayElements(numeros),INT8);
    PrintArray(numeros,NumberOfArrayElements(numeros),INT8);

    int8_t numerosA[] = {23,45,23,23};
    int8_t numerosB[] = {11,21,31,41};
    PrintArray(numerosA,NumberOfArrayElements(numerosA),INT8);
    PrintArray(numerosB,NumberOfArrayElements(numerosB),INT8);
    InterchangeArrayGeneric(numerosA,NumberOfArrayElements(numerosA),numerosB,NumberOfArrayElements(numerosB),INT8);
    printf("hola\n");
    PrintArray(numerosA,NumberOfArrayElements(numerosA),INT8);
    PrintArray(numerosB,NumberOfArrayElements(numerosB),INT8);

    int8_t a = 23;
    a = *(int8_t*)FindArray(numerosB,(int8_t*)&a,4,INT8);
    Print8int(a);

    printf("Repeticiones: ");
    Print8int(FindNumberRepetitionsArray(numerosB,(int8_t*)&a,4,INT8));

    int8_t arreglo[9] = {1,2,3,4};
    int8_t arregloParte2[] = {5,6,9,8,9};

    ConcatenateArray(arreglo,4,arregloParte2,5,INT8);
    PrintArray(arreglo,NumberOfArrayElements(arreglo),INT8);

    int8_t *maxNum = (int8_t*)FindArrayMaxValue(arreglo,9,INT8);

    Print8int(*maxNum);

    char desorden[] = {'a','r','e','y','h','a','i','z','w'};
    RadixSort(desorden,NumberOfArrayElements(desorden),CHAR);
    PrintArray(desorden,NumberOfArrayElements(desorden),CHAR);

    return EXIT_SUCCESS;
}

