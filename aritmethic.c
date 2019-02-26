#include "aritmethic.h"

uint32_t _AritmethicGetIntegerFromArray(void *number, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    uint32_t integerPart = 0;
    char *separator = strstr((char*)number,".");
    if(*(char*)number == '-' || *(char*)number == '+')
    {
        number++;
    }

    if(NULL == separator)
    {
        ErrorRaise(errorTypeAritmethic, fileName, lineNumber, functionName);
    }
    else if(CHAR  == typeData)
    {
        uint32_t numberOfDigits = separator - (char*)number;

        for(uint32_t i = 0, j = numberOfDigits; (((char*)number) + i) < separator; i++, j--)
        {
            integerPart = integerPart*10 + ( *( ((char*)number) + i) - '0');
        }
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        uint32_t numberOfDigits =  (unsigned char*)separator - (unsigned char*)number;

        for(uint32_t i = 0, j = numberOfDigits; (((unsigned char*)number) + i) < (unsigned char*)separator; i++, j--)
        {
            integerPart = integerPart*10 + ( *( ((unsigned char*)number) + i) - '0');
        }
    }
    else
    {
        ErrorRaise(errorTypeAritmethic, fileName, lineNumber, functionName);
    }

    return integerPart;
}

uint32_t _AritmethicGetDecimalFromArray(void *number, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    uint32_t decimalPart = 0;
    char *separator = strstr((char*)number,".");
    if(*(char*)number == '-' || *(char*)number == '+')
    {
        number++;
    }

    if(NULL == separator)
    {
        ErrorRaise(errorTypeAritmethic, fileName, lineNumber, functionName);
    }
    else if(CHAR  == typeData)
    {
        uint32_t numberOfDigits = strlen(++separator);

        for(uint32_t i = numberOfDigits - 1; (*( ((char*)separator) + i ) != '.'); i--)
        {
            decimalPart = decimalPart*10 + ( *( ((char*)separator) + i) - '0');
        }
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        uint32_t numberOfDigits = strlen(++separator);

        for(uint32_t i = numberOfDigits - 1; (i > 0) && (*( ((unsigned char*)separator) + i ) != '.'); i--)
        {
            decimalPart = decimalPart*10 + ( *( ((unsigned char*)separator) + i) - '0');
        }
    }
    else
    {
        ErrorRaise(errorTypeAritmethic, fileName, lineNumber, functionName);
    }

    return decimalPart;
}

uint32_t _AritmethicNumberOfDigitsFromArray(const void* number, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    uint32_t numberOfDigits = 0;
    if(*(char*)number == '-' || *(char*)number == '+')
    {
        number++;
    }

    if(CHAR  == typeData || UNSIGNED_CHAR == typeData)
    {
        if(strstr((char*)number,"."))
        {
            numberOfDigits = strlen((char*)number) - 1;
        }
        else
        {
            numberOfDigits = strlen((char*)number);
        }
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }

    return numberOfDigits;
}

uint32_t _AritmethicNumberOfIntegerDigitsFromArray(const void* number, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    uint32_t numberOfDigits = 0;
    if(*(char*)number == '-' || *(char*)number == '+')
    {
        number++;
    }

    char *separator = strstr((char*)number,".");

    if(NULL == separator)
    {
        ErrorRaise(errorTypeAritmethic, fileName, lineNumber, functionName);
    }
    else if(CHAR  == typeData || UNSIGNED_CHAR == typeData)
    {
        numberOfDigits = separator - (char*)number;
    }
    else
    {
        ErrorRaise(errorTypeAritmethic, fileName, lineNumber, functionName);
    }

    return numberOfDigits;
}

uint32_t _AritmethicNumberOfDecimalDigitsFromArray(const void* number, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    uint32_t numberOfDigits = 0;
    if(*(char*)number == '-' || *(char*)number == '+')
    {
        number++;
    }

    char *separator = strstr((char*)number,".");

    if(NULL == separator)
    {
        ErrorRaise(errorTypeAritmethic, fileName, lineNumber, functionName);
    }
    else if(CHAR  == typeData || UNSIGNED_CHAR == typeData)
    {
        numberOfDigits = strlen(++separator);
    }
    else
    {
        ErrorRaise(errorTypeAritmethic, fileName, lineNumber, functionName);
    }

    return numberOfDigits;
}

int8_t _AritmethicGetIndividualDigitFromArray(const void* number, const uint32_t positionDigit, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if(*(char*)number == '-' || *(char*)number == '+')
    {
        number++;
    }

    for(uint32_t i = 0; *((char*)number + i) != '\0' ; i++)
    {
        if(i == positionDigit)
        {
            return *((char*)number + i) - '0';
        }
    }

    return NULL;
}

int8_t _AritmethicGetIndividualDigit(const void* number, const uint32_t precision, const uint32_t positionDigit, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if(precision != 0 && typeData >= CHAR && typeData <= UNSIGNED_INT32)
    {

    }
    else if(FLOAT == typeData)
    {

    }
    else if(DOUBLE == typeData)
    {

    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }

    return 1;
}

