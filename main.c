#include <stdio.h>
#include "array.h"
#include "aritmethic.h"
#include "sort.h"

int main()
{
    printf("Hola Mundo \n");
    char *a = "24424.4543";
    int32_t result = AritmethicGetIntegerPartFromCharArray(a, INT16);
    printf("result: %d \n", result);

    char b[] = {'d','a', 'z','f','g', 'x', 'b', 'a'};
    for(int i = 0; i < SizeOfArray(b); i++)
    {
        printf("%c ", b[i]);
    }
    printf("\n");
    //SortRadixSort(b, SizeOfArray(b),CHAR);
    SortBubbleSort(b, SizeOfArray(b),CHAR);

    for(int i = 0; i < SizeOfArray(b); i++)
    {
        printf("%c ", b[i]);
    }
    return 0;
}

