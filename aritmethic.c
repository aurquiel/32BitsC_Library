#include "aritmethic.h"

uint32_t _AritmethicGetIntegerPartString(void *number, const int8_t typeData, const char* fileName, const char* functionName, const uint32_t lineNumber)
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
        ErrorRaise(errorTypeAritmethic, fileName, functionName, lineNumber);
    }

    return integerPart;
}

uint32_t _AritmethicGetDecimalPartFromString(void *number, const int32_t precision, const int8_t typeData, const char* fileName, const char* functionName, const uint32_t lineNumber)
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
        ErrorRaise(errorTypeAritmethic, fileName, functionName, lineNumber);
    }

    return decimalPart;
}

uint32_t _AritmethicCountNegativeNumbers(const void* array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const char* functionName, const uint32_t lineNumber)
{
    if( sizeArray <= 0 )
    {
        ErrorRaise(errorSizeArray, fileName, functionName, lineNumber);
    }

    uint32_t negativeNumbers = 0;

    if(typeData == CHAR)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            if( *((char*)array + i) < 0)
            {
                negativeNumbers++;
            }

        }
    }
    else if (typeData == UNSIGNED_CHAR)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            if( *((unsigned char*)array + i) < 0)
            {
                negativeNumbers++;
            }
        }
    }
    else if(typeData == INT8)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            if( *((int8_t*)array + i) < 0)
            {
                negativeNumbers++;
            }
        }
    }
    else if(typeData == UNSIGNED_INT8)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            if( *((uint8_t*)array + i) < 0)
            {
                negativeNumbers++;
            }
        }
    }
    else if(typeData == INT16)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            if( *((int16_t*)array + i) < 0)
            {
                negativeNumbers++;
            }
        }
    }
    else if(typeData == UNSIGNED_INT16)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            if( *((uint16_t*)array + i) < 0)
            {
                negativeNumbers++;
            }
        }
    }
    else if(typeData == INT32)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            if( *((int32_t*)array + i) < 0)
            {
                negativeNumbers++;
            }
        }
    }
    else if(typeData == UNSIGNED_INT32)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            if( *((uint32_t*)array + i) < 0)
            {
                negativeNumbers++;
            }
        }
    }
    else if(typeData == FLOAT)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            if( *((float*)array + i) < 0)
            {
                negativeNumbers++;
            }
        }
    }
    else if(typeData == DOUBLE)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
           if( *((double*)array + i) < 0)
            {
                negativeNumbers++;
            }
        }
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, functionName, lineNumber);
    }

    return negativeNumbers;
}

uint32_t _AritmethicCountPositiveNumbers(const void* array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const char* functionName, const uint32_t lineNumber)
{
    if( sizeArray <= 0 )
    {
        ErrorRaise(errorSizeArray, fileName, functionName, lineNumber);
    }

    uint32_t positiveNumbers = 0;

    if(typeData == CHAR)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            if( *((char*)array + i) >= 0)
            {
                positiveNumbers++;
            }
        }
    }
    else if (typeData == UNSIGNED_CHAR)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            if( *((unsigned char*)array + i) >= 0)
            {
                positiveNumbers++;
            }
        }
    }
    else if(typeData == INT8)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            if( *((int8_t*)array + i) >= 0)
            {
                positiveNumbers++;
            }
        }
    }
    else if(typeData == UNSIGNED_INT8)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            if( *((uint8_t*)array + i) >= 0)
            {
                positiveNumbers++;
            }
        }
    }
    else if(typeData == INT16)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            if( *((int16_t*)array + i) >= 0)
            {
                positiveNumbers++;
            }
        }
    }
    else if(typeData == UNSIGNED_INT16)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            if( *((uint16_t*)array + i) >= 0)
            {
                positiveNumbers++;
            }
        }
    }
    else if(typeData == INT32)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            if( *((int32_t*)array + i) >= 0)
            {
                positiveNumbers++;
            }
        }
    }
    else if(typeData == UNSIGNED_INT32)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            if( *((uint32_t*)array + i) >= 0)
            {
                positiveNumbers++;
            }
        }
    }
    else if(typeData == FLOAT)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            if( *((float*)array + i) >= 0)
            {
                positiveNumbers++;
            }
        }
    }
    else if(typeData == DOUBLE)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
           if( *((double*)array + i) >= 0)
            {
                positiveNumbers++;
            }
        }
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, functionName, lineNumber);
    }

    return positiveNumbers;
}

uint32_t _AritmethicNumberOfDigits(const void* number, const int8_t precision, const int8_t typeData, const char* fileName, const char* functionName, const uint32_t lineNumber)
{
    uint32_t digitNumbers = 0;

    if(typeData == CHAR)
    {
        char numberOperator = *((char*)number);
        while( numberOperator != 0)
        {
            numberOperator /= 10;
            digitNumbers++;
        }
    }
    else if (typeData == UNSIGNED_CHAR)
    {
        unsigned char numberOperator = *((unsigned char*)number);
        while( numberOperator != 0)
        {
            numberOperator /= 10;
            digitNumbers++;
        }
    }
    else if(typeData == INT8)
    {
        int8_t numberOperator = *((int8_t*)number);
        while( numberOperator != 0)
        {
            numberOperator /= 10;
            digitNumbers++;
        }

    }
    else if(typeData == UNSIGNED_INT8)
    {
        uint8_t numberOperator = *((uint8_t*)number);
        while( numberOperator != 0)
        {
            numberOperator /= 10;
            digitNumbers++;
        }
    }
    else if(typeData == INT16)
    {
        int16_t numberOperator = *((int16_t*)number);
        while( numberOperator != 0)
        {
            numberOperator /= 10;
            digitNumbers++;
        }
    }
    else if(typeData == UNSIGNED_INT16)
    {
        uint16_t numberOperator = *((uint16_t*)number);
        while( numberOperator != 0)
        {
            numberOperator /= 10;
            digitNumbers++;
        }
    }
    else if(typeData == INT32)
    {
        int32_t numberOperator = *((int32_t*)number);
        while( numberOperator != 0)
        {
            numberOperator /= 10;
            digitNumbers++;
        }
    }
    else if(typeData == UNSIGNED_INT32)
    {
        uint32_t numberOperator = *((uint32_t*)number);
        while( numberOperator != 0)
        {
            numberOperator /= 10;
            digitNumbers++;
        }
    }
    else if(typeData == FLOAT)
    {

    }
    else if(typeData == DOUBLE)
    {

    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, functionName, lineNumber);
    }

    return digitNumbers;
}

uint32_t _AritmethicNumberOfDigitsString(const void* number, const int8_t typeData, const char* fileName, const char* functionName, const uint32_t lineNumber)
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
        ErrorRaise(errorTypeArray, fileName, functionName, lineNumber);
    }

    return digitNumbers;
}

int8_t _AritmethicGetIndividualDigit(const void* number, const uint32_t positionDigit, const int8_t typeData, const char* fileName, const char* functionName, const uint32_t lineNumber)
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
        ErrorRaise(errorTypeArray, fileName, functionName, lineNumber);
    }


    return 1;
}

void _AritmethicArrayMultiplied(void* array, int64_t multiplieyer, void* multipe, int8_t typeData)
{

}
