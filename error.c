#include "error.h"

void ErrorRaise(const int32_t messageNumber, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if(messageNumber == errorSizePrint)
    {
        fprintf(stderr, "%s\nError Number: %d.\nError Description: Print Size Array.\nFile: %s\nFile Line: %d\nFunction: %s\n%s\n", ERROR_HEADER_LIINE, messageNumber, fileName, lineNumber, functionName, ERROR_HEADER_LIINE);
    }
    else if(messageNumber == errorTypePrint)
    {
        fprintf(stderr, "%s\nError Number: %d.\nError Description: Print Data Type.\nFile: %s\nFile Line: %d\nFunction: %s\n%s\n", ERROR_HEADER_LIINE, messageNumber, fileName, lineNumber, functionName, ERROR_HEADER_LIINE);
    }
    else if(messageNumber == errorSizeArray)
    {
        fprintf(stderr, "%s\nError Number: %d.\nError Description: Array Size.\nFile: %s\nFile Line: %d\nFunction: %s\n%s\n", ERROR_HEADER_LIINE, messageNumber, fileName, lineNumber, functionName, ERROR_HEADER_LIINE);
    }
    else if(messageNumber == errorTypeArray)
    {
        fprintf(stderr, "%s\nError Number: %d.\nError Description: Array Type.\nFile: %s\nFile Line: %d\nFunction: %s\n%s\n", ERROR_HEADER_LIINE, messageNumber, fileName, lineNumber, functionName, ERROR_HEADER_LIINE);
    }
    else if(messageNumber == errorBoundaryLimits)
    {
         fprintf(stderr, "%s\nError Number: %d.\nError Description: Boundary Limits.\nFile: %s\nFile Line: %d\nFunction: %s\n%s\n", ERROR_HEADER_LIINE, messageNumber, fileName, lineNumber, functionName, ERROR_HEADER_LIINE);
    }
    else if(messageNumber == errorNegativeNumberArray)
    {
        fprintf(stderr, "%s\nError Number: %d.\nError Description: Negative Number.\nFile: %s\nFile Line: %d\nFunction: %s\n%s\n", ERROR_HEADER_LIINE, messageNumber, fileName, lineNumber, functionName, ERROR_HEADER_LIINE);
    }
    else if(messageNumber == errorSizeAllocator)
    {
        fprintf(stderr, "%s\nError Number: %d.\nError Description: Size Allocator.\nFile: %s\nFile Line: %d\nFunction: %s\n%s\n", ERROR_HEADER_LIINE, messageNumber, fileName, lineNumber, functionName, ERROR_HEADER_LIINE);
    }
    else if(messageNumber == errorTypeAllocator)
    {
        fprintf(stderr, "%s\nError Number: %d.\nError Description: Allocator Data Type.\nFile: %s\nFile Line: %d\nFunction: %s\n%s\n", ERROR_HEADER_LIINE, messageNumber, fileName, lineNumber, functionName, ERROR_HEADER_LIINE);
    }
    else if(messageNumber == errorNoAllocate)
    {
        fprintf(stderr, "%s\nError Number: %d.\nError Description: No Allocation.\nFile: %s\nFile Line: %d\nFunction: %s\n%s\n", ERROR_HEADER_LIINE, messageNumber, fileName, lineNumber, functionName, ERROR_HEADER_LIINE);
    }
    else if(messageNumber == errorNoOpenFile)
    {
        fprintf(stderr, "%s\nError Number: %d.\nError Description: Failed Opened File.\nFile: %s\nFile Line: %d\nFunction: %s\n%s\n", ERROR_HEADER_LIINE, messageNumber, fileName, lineNumber, functionName, ERROR_HEADER_LIINE);
    }
    else if(messageNumber == errorNegativeNumberArithmetic)
    {
        fprintf(stderr, "%s\nError Number: %d.\nError Description: Arithmetic Negative Number.\nFile: %s\nFile Line: %d\nFunction: %s\n%s\n", ERROR_HEADER_LIINE, messageNumber, fileName, lineNumber, functionName, ERROR_HEADER_LIINE);
    }
    else if(messageNumber == errorSeparatorAritmethic)
    {
        fprintf(stderr, "%s\nError Number: %d.\nError Description: Arithmetic Separator null.\nFile: %s\nFile Line: %d\nFunction: %s\n%s\n", ERROR_HEADER_LIINE, messageNumber, fileName, lineNumber, functionName, ERROR_HEADER_LIINE);
    }
    else if(messageNumber == errorTypeAritmethic)
    {
        fprintf(stderr, "%s\nError Number: %d.\nError Description: Arithmetic Data Type.\nFile: %s\nFile Line: %d\nFunction: %s\n%s\n", ERROR_HEADER_LIINE, messageNumber, fileName, lineNumber, functionName, ERROR_HEADER_LIINE);
    }

}
