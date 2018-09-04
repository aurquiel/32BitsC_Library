#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "error.h"


FILE *FileOpen(char* routeFile, char* modeFile);
void FileClose(FILE* theFile);


#endif // FILE_H_INCLUDED
