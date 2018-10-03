#include "aritmethic.h"

int64_t _AritmethicGetIntegerPartFromDecimal(void *number, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber)
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
        ErrorRaise(errorTypeAritmethic, fileName, functionName, lineNumber);
    }

    return integerPart;
}

int64_t _AritmethicGetDecimalPartFromDecimal(void *number, int8_t precision ,int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber)
{
    if(precision <= 0)
    {
        ErrorRaise(errorNegativeNumberArtihmetic, fileName, functionName, lineNumber);
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
        int64_t integerPart = AritmethicGetIntegerPartFromDecimal(number, typeData);
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
        int64_t integerPart = AritmethicGetIntegerPartFromDecimal(number, typeData);
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
        ErrorRaise(errorTypeAritmethic, fileName, functionName, lineNumber);
    }

    return decimalPart;
}

int64_t _AritmethicCountNegativeNumbers(void* array, int64_t sizeArray, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber)
{
    if( sizeArray <= 0 )
    {
        ErrorRaise(errorSizeArray, fileName, functionName, lineNumber);
    }

    int64_t negativeNumbers = 0;

    if(typeData == CHAR)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
        {
            if( *((char*)array + i) < 0)
            {
                negativeNumbers++;
            }

        }
    }
    else if (typeData == UNSIGNED_CHAR)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
        {
            if( *((unsigned char*)array + i) < 0)
            {
                negativeNumbers++;
            }
        }
    }
    else if(typeData == INT8)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
        {
            if( *((int8_t*)array + i) < 0)
            {
                negativeNumbers++;
            }
        }
    }
    else if(typeData == UNSIGNED_INT8)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
        {
            if( *((uint8_t*)array + i) < 0)
            {
                negativeNumbers++;
            }
        }
    }
    else if(typeData == INT16)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
        {
            if( *((int16_t*)array + i) < 0)
            {
                negativeNumbers++;
            }
        }
    }
    else if(typeData == UNSIGNED_INT16)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
        {
            if( *((uint16_t*)array + i) < 0)
            {
                negativeNumbers++;
            }
        }
    }
    else if(typeData == INT32)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
        {
            if( *((int32_t*)array + i) < 0)
            {
                negativeNumbers++;
            }
        }
    }
    else if(typeData == UNSIGNED_INT32)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
        {
            if( *((uint32_t*)array + i) < 0)
            {
                negativeNumbers++;
            }
        }
    }
    else if(typeData == INT64)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
        {
            if( *((int64_t*)array + i) < 0)
            {
                negativeNumbers++;
            }
        }
    }
    else if(typeData == UNSIGNED_INT64)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
        {
            if( *((uint64_t*)array + i) < 0)
            {
                negativeNumbers++;
            }
        }
    }
    else if(typeData == FLOAT)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
        {
            if( *((float*)array + i) < 0)
            {
                negativeNumbers++;
            }
        }
    }
    else if(typeData == DOUBLE)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
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

int64_t _AritmethicCountPositiveNumbers(void* array, int64_t sizeArray, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber)
{
    if( sizeArray <= 0 )
    {
        ErrorRaise(errorSizeArray, fileName, functionName, lineNumber);
    }

    int64_t positiveNumbers = 0;

    if(typeData == CHAR)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
        {
            if( *((char*)array + i) >= 0)
            {
                positiveNumbers++;
            }
        }
    }
    else if (typeData == UNSIGNED_CHAR)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
        {
            if( *((unsigned char*)array + i) >= 0)
            {
                positiveNumbers++;
            }
        }
    }
    else if(typeData == INT8)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
        {
            if( *((int8_t*)array + i) >= 0)
            {
                positiveNumbers++;
            }
        }
    }
    else if(typeData == UNSIGNED_INT8)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
        {
            if( *((uint8_t*)array + i) >= 0)
            {
                positiveNumbers++;
            }
        }
    }
    else if(typeData == INT16)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
        {
            if( *((int16_t*)array + i) >= 0)
            {
                positiveNumbers++;
            }
        }
    }
    else if(typeData == UNSIGNED_INT16)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
        {
            if( *((uint16_t*)array + i) >= 0)
            {
                positiveNumbers++;
            }
        }
    }
    else if(typeData == INT32)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
        {
            if( *((int32_t*)array + i) >= 0)
            {
                positiveNumbers++;
            }
        }
    }
    else if(typeData == UNSIGNED_INT32)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
        {
            if( *((uint32_t*)array + i) >= 0)
            {
                positiveNumbers++;
            }
        }
    }
    else if(typeData == INT64)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
        {
            if( *((int64_t*)array + i) >= 0)
            {
                positiveNumbers++;
            }
        }
    }
    else if(typeData == UNSIGNED_INT64)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
        {
            if( *((uint64_t*)array + i) >= 0)
            {
                positiveNumbers++;
            }
        }
    }
    else if(typeData == FLOAT)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
        {
            if( *((float*)array + i) >= 0)
            {
                positiveNumbers++;
            }
        }
    }
    else if(typeData == DOUBLE)
    {
        for (int64_t i = 0; i < sizeArray ; i++)
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

int64_t _AritmethicNumberOfDigits(void* number, int8_t precision, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber)
{
    int64_t digitNumbers = 0;

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
    else if(typeData == INT64)
    {
        int64_t numberOperator = *((int64_t*)number);
        while( numberOperator != 0)
        {
            numberOperator /= 10;
            digitNumbers++;
        }
    }
    else if(typeData == UNSIGNED_INT64)
    {
        uint64_t numberOperator = *((uint64_t*)number);
        while( numberOperator != 0)
        {
            numberOperator /= 10;
            digitNumbers++;
        }
    }
    else if(typeData == FLOAT)
    {
        int64_t integerPart = AritmethicGetIntegerPartFromDecimal((float*)number, typeData);
        int64_t decimalPart = AritmethicGetDecimalPartFromDecimal((float*)number, precision,typeData);

        while( integerPart != 0)
        {
            integerPart /= 10;
            digitNumbers++;
        }
        while( decimalPart != 0)
        {
            decimalPart /= 10;
            digitNumbers++;
        }

    }
    else if(typeData == DOUBLE)
    {
        int64_t integerPart = AritmethicGetIntegerPartFromDecimal((double*)number, typeData);
        int64_t decimalPart = AritmethicGetDecimalPartFromDecimal((double*)number, precision,typeData);

        while( integerPart != 0)
        {
            integerPart /= 10;
            digitNumbers++;
        }
        while( decimalPart != 0)
        {
            decimalPart /= 10;
            digitNumbers++;
        }
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, functionName, lineNumber);
    }

    return digitNumbers;
}

int64_t _AritmethicNumberOfDigitsString(void* number, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber)
{
    int64_t digitNumbers = 0;

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

int8_t _AritmethicGetIndividualDigit(int64_t number, int64_t positionDigit)
{
    int64_t multiplyer = 10;

    for(int64_t i = 0; i < positionDigit - 1; i++)
    {
        multiplyer *= 10;
    }

    number -= ((int64_t)(number/multiplyer))*multiplyer;
    if(multiplyer != 10)
    {
        multiplyer /= 10;
        number = ((int64_t)(number/multiplyer));
    }

    return (int8_t)number;
}
