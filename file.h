#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <fcntl.h>
#include "error.h"



/** \briefThis function is a wrapper of the fopen() function, enhancing the notification error in case of NULL as result of the file opening process.
 *
 * \param routeFile
 * the route of the file
 * \param modeFile
 * opening mode of the file
 * \return FILE
 * pointer to the opening file
 *
 */
FILE *FileOpen(char* routeFile, char* modeFile);



/** \briefThis function is a wrapper of the fclose() function, enhancing the closing process.
 *
 * \param theFile
 * pointer to the file
 *
 */
void FileClose(FILE* theFile);


#endif // FILE_H_INCLUDED
