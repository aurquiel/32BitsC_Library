#include "file.h"

FILE *FileOpen(char* routeFile, char* modeFile)
{
    FILE* theFile = NULL;
    theFile = fopen(routeFile,modeFile);

    if(NULL == theFile)
        exit(errorNoOpenFile);
    else
        return theFile;

}

void FileClose(FILE* theFile)
{
    fclose(theFile);
    fclose(theFile);
}
