#include "aritmethic.h"

int64_t AritmethicGetIntegerPart(void *number, int8_t typeData)
{
    int64_t integerPart = 0;

    if(typeData == CHAR || typeData == UNSIGNED_CHAR)
    {
        char *separator = strstr((char*)number,".");
        int64_t numberOfNumbers = separator - (char*)number;

        for(int64_t i = 0, j = numberOfNumbers; (((char*)number) + i) < separator; i++, j--)
        {
            integerPart = integerPart*10 + ( *( ((char*)number) + i) - '0');
        }
    }
    else if(typeData == FLOAT)
    {
        integerPart = ((int64_t)(*((float*)number)));
    }
    else if(typeData == DOUBLE)
    {
        integerPart = ((int64_t)(*((double*)number)));
    }
    else
    {
        exit(errorTypeAritmethic);
    }

    return integerPart;
}

int64_t AritmethicGetDecimalPart(void *number,int8_t precision ,int8_t typeData)
{
    if(precision <= 0)
    {
        exit(errorNegativeNumberArtihmetic);
    }

    int64_t decimalPart = 0;

    if(typeData == CHAR || typeData == UNSIGNED_CHAR)
    {
        char *separator = strstr((char*)number,".");
        int64_t longDecimalPart = strlen(++separator);

        for(int64_t j = longDecimalPart ; (j > 0); j--)
        {
            decimalPart += (*(separator++) - '0')*pow(10, j - 1);
        }

        if(precision < longDecimalPart)
        {
            decimalPart /= pow(10,longDecimalPart - precision);
        }
    }
    else if(typeData == FLOAT)
    {
        int64_t integerPart = AritmethicGetIntegerPart(number, typeData);
        float lessIntegerPart = *((float*)number) - integerPart;
        lessIntegerPart *= pow(10,precision);
        decimalPart = (int64_t)lessIntegerPart;

        while(decimalPart % 10 == 0)
        {
            decimalPart /= 10;
        }
    }
    else if(typeData == DOUBLE)
    {
        int64_t integerPart = AritmethicGetIntegerPart(number, typeData);
        double lessIntegerPart = *((double*)number) - integerPart;
        lessIntegerPart *= pow(10,precision);
        decimalPart = (int64_t)lessIntegerPart;

        while(decimalPart % 10 == 0)
        {
            decimalPart /= 10;
        }
    }
    else
    {
        exit(errorTypeAritmethic);
    }

    return decimalPart;
}
