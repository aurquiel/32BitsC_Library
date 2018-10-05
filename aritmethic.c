#include "aritmethic.h"

uint32_t _AritmethicGetIntegerString(void *number, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    uint32_t integerPart = 0;

    if(typeData == CHAR || typeData == UNSIGNED_CHAR)
    {
        char *separator = strstr((char*)number,".");
        uint32_t numberOfNumbers = separator - (char*)number;

        for(uint32_t i = 0, j = numberOfNumbers; (((char*)number) + i) < separator; i++, j--)
        {
            integerPart = integerPart*10 + ( *( ((char*)number) + i) - '0');
        }
    }
    else
    {
        ErrorRaise(errorTypeAritmethic, fileName, lineNumber, functionName);
    }

    return integerPart;
}

uint32_t _AritmethicGetDecimalString(void *number, const int32_t precision, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    uint32_t decimalPart = 0;

    if(typeData == CHAR || typeData == UNSIGNED_CHAR)
    {
        char *separator = strstr((char*)number,".");
        uint32_t longDecimalPart = strlen(++separator);

        for(uint32_t j = longDecimalPart ; (j > 0); j--)
        {
            decimalPart += (*(separator++) - '0')*pow(10, j - 1);
        }

        if(precision < longDecimalPart)
        {
            decimalPart /= pow(10,longDecimalPart - precision);
        }
    }
    else
    {
        ErrorRaise(errorTypeAritmethic, fileName, lineNumber, functionName);
    }

    return decimalPart;
}

uint32_t _AritmethicNumberOfDigits(const void* number, const int8_t precision, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    uint32_t digitNumbers = 0;

    if(typeData >= CHAR && typeData <= UNSIGNED_INT32)
    {
        uint32_t numberOperator = *((uint32_t*)number);
        while( numberOperator != 0)
        {
            numberOperator /= 10;
            digitNumbers++;
        }
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }

    return digitNumbers;
}

uint32_t _AritmethicNumberOfDigitsString(const void* number, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    uint32_t digitNumbers = 0;

    if(typeData == CHAR || typeData == UNSIGNED_CHAR)
    {
        if(strstr((char*)number,"."))
        {
            digitNumbers = strlen((char*)number) - 1;
        }
        else
        {
            digitNumbers = strlen((char*)number);
        }
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }

    return digitNumbers;
}

int8_t _AritmethicGetIndividualDigit(const void* number, const uint32_t positionDigit, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if(typeData >= CHAR && typeData <= UNSIGNED_INT32)
    {

    }
    else if(typeData == FLOAT)
    {

    }
    else if(typeData == DOUBLE)
    {

    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }

    return 1;
}

