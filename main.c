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
    printf("Interchanged arrays\n");
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

    char array[] = {'a','r','e','y','h','a','i','z','w'};
    RadixSort(array,NumberOfArrayElements(array),CHAR);
    PrintArray(array,NumberOfArrayElements(array),CHAR);

    int32_t arrayN[] = {23,456,78,23,6,134,67,32,89,2312,6764,45,56,54243,32,4,23,4,234};
    RadixSort(arrayN,NumberOfArrayElements(arrayN),INT32);
    PrintArray(arrayN,NumberOfArrayElements(arrayN),INT32);

    double arrayD[] = {23.676,456.676,78.65756,23.7657,6.0567,134.45,67.78,32.7,89.878,2318.872,6764.7665,45.766,56.67,54243.6765,32.6765,4.67,23.676,4.67,234.67};
    RadixSort(arrayD,NumberOfArrayElements(arrayD),DOUBLE);
    PrintArray(arrayD,NumberOfArrayElements(arrayD),DOUBLE);

    char random[80];
    ClearArray(random,80,CHAR);
    char low = 'a';
    char up = 'z';
    RandomArrayGenerator(random,80,(char*)&low,(char*)&up,CHAR);
    PrintArray(random,80,CHAR);

    int8_t randomN[100];
    ClearArray(randomN,100,INT8);
    int8_t lowN = -8;
    int8_t upN = 8;
    RandomArrayGenerator(randomN,100,(int8_t*)&lowN,(int8_t*)&upN,INT8);
    PrintArray(randomN,100,INT8);

    double ww = 14343.3432;
    Print64int(GetIntegerPart((double*)&ww, DOUBLE));

    Print64int(GetDecimalPart("45453.576456", CHAR));
    return EXIT_SUCCESS;
}

