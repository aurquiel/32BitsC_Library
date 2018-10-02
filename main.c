#include "print.h"
#include "array.h"
#include "allocator.h"
#include "sort.h"
#include "aritmethic.h"

int main()
{
    int8_t numeros[] = {23,45,78,23};
    PrintArray(numeros,NumberOfArrayElements(numeros),INT8);
    ArrayClear(numeros,NumberOfArrayElements(numeros),INT8);
    PrintArray(numeros,NumberOfArrayElements(numeros),INT8);

    int8_t numerosA[] = {23,45,23,23};
    int8_t numerosB[] = {11,21,31,41};
    PrintArray(numerosA,NumberOfArrayElements(numerosA),INT8);
    PrintArray(numerosB,NumberOfArrayElements(numerosB),INT8);
    ArrayInterchange(numerosA,NumberOfArrayElements(numerosA),numerosB,NumberOfArrayElements(numerosB),INT8);
    printf("Interchanged arrays\n");
    PrintArray(numerosA,NumberOfArrayElements(numerosA),INT8);
    PrintArray(numerosB,NumberOfArrayElements(numerosB),INT8);

    int8_t a = 23;
    a = *(int8_t*)ArrayFind(numerosB,(int8_t*)&a,4,INT8);
    Print8int(a);

    printf("Repeticiones: ");
    Print8int(ArrayFindNumberRepetitions(numerosB,(int8_t*)&a,4,INT8));

    int8_t arreglo[9] = {1,2,3,4};
    int8_t arregloParte2[] = {5,6,9,8,9};

    ArrayConcatenate(arreglo,4,arregloParte2,5,INT8);
    PrintArray(arreglo,NumberOfArrayElements(arreglo),INT8);

    int8_t *maxNum = (int8_t*)ArrayFindMaxValue(arreglo,9,INT8);

    Print8int(*maxNum);

    char array[] = {'a','r','e','y','h','a','i','z','w'};
    SortRadix(array,NumberOfArrayElements(array),CHAR);
    PrintArray(array,NumberOfArrayElements(array),CHAR);

    int32_t arrayN[] = {23,456,78,23,6,134,67,32,89,2312,6764,45,56,54243,32,4,23,4,234};
    SortRadix(arrayN,NumberOfArrayElements(arrayN),INT32);
    PrintArray(arrayN,NumberOfArrayElements(arrayN),INT32);

    double arrayD[] = {23.676,456.676,78.65756,23.7657,6.0567,134.45,67.78,32.7,89.878,2318.872,6764.7665,45.766,56.67,54243.6765,32.6765,4.67,23.676,4.67,234.67};
    SortRadix(arrayD,NumberOfArrayElements(arrayD),DOUBLE);
    PrintArray(arrayD,NumberOfArrayElements(arrayD),DOUBLE);

    char random[80];
    ArrayClear(random,80,CHAR);
    char low = 'a';
    char up = 'z';
    ArrayRandomGenerator(random,80,(char*)&low,(char*)&up,CHAR);
    PrintArray(random,80,CHAR);

    int8_t randomN[100];
    ArrayClear(randomN,100,INT8);
    int8_t lowN = -8;
    int8_t upN = 8;
    ArrayRandomGenerator(randomN,100,(int8_t*)&lowN,(int8_t*)&upN,INT8);
    PrintArray(randomN,100,INT8);

    double ww = 14343.3432;
    Print64int(AritmethicGetIntegerPart((double*)&ww, DOUBLE));

    Print64int(AritmethicGetDecimalPart("45453.576456",2,CHAR));
    Print64int(AritmethicGetIntegerPart("45453.576456",CHAR));

    printf("float\n");
    float wf = 14343.3456;
    Print64int(AritmethicGetDecimalPart((float*)&wf,2, FLOAT));

    printf("double\n");
    double wf2 = 14343.3456;
    Print64int(AritmethicGetDecimalPart((double*)&wf2,4, DOUBLE));

    printf("ramdon double\n");

    double numFloat[100];

    double lowF = -1;
    double upF = 1;
    ArrayRandomGenerator(numFloat,100,(double*)&lowF,(double*)&upF,DOUBLE);
    PrintArray(numFloat,100,DOUBLE);


    unsigned char arrayRe[] = "hola buenos dias";
    //char arrayRe22[] = {'a','b','c','d','\0'};
    ArrayReverse(arrayRe,NumberOfArrayElements(arrayRe),UNSIGNED_CHAR);
    PrintArray(arrayRe,NumberOfArrayElements(arrayRe),UNSIGNED_CHAR);

    int8_t myNumRever[] = {43,68,9,4,87,32,46,67,99};
    ArrayReverse(myNumRever,NumberOfArrayElements(myNumRever),INT8);
    PrintArray(myNumRever,NumberOfArrayElements(myNumRever), INT8);

    char dios[] = "hola Dios como estas?";
    ArrayReverseInterval(dios, NumberOfArrayElements(dios), dios, dios + 20, CHAR);
    PrintArray(dios,NumberOfArrayElements(dios),CHAR);

    printf("\nShuffle\n");
    int8_t arregloShuffle[] = {1,2,3,4,5,6,7,8,9};
    PrintArray(arregloShuffle,NumberOfArrayElements(arregloShuffle),INT8);
    ArrayShuffle(arregloShuffle,NumberOfArrayElements(arregloShuffle),INT8);
    PrintArray(arregloShuffle,NumberOfArrayElements(arregloShuffle),INT8);
    printf("\n%I64d", RAND_MAX);

    int64_t *arrayRND = (int64_t*)AllocatorCalloc(50000000,INT64);
    int64_t upper = 5000000;
    int64_t down = 0;
    ArrayRandomGenerator(arrayRND,50000000,(int64_t*)&down,(int64_t*)&upper,INT64);
    SortRadix(arrayRND,50000000,INT64);
    //PrintArray(arrayRND,NumberOfArrayElements(arrayRND),INT64);
    AllocatorFree(arrayRND);
    return EXIT_SUCCESS;
}

