//
// Created by root on 8/29/17.
//

#include <stdio.h>

int main()
{
    FILE* pFile;
    int nLength;
    char buffer[512];

    pFile = fopen("fwrite.txt", "rb");
    if(pFile == NULL)
        return 0;

    fread(&nLength, sizeof nLength, 1, pFile);
    fread(buffer, 1, sizeof buffer, pFile);
    buffer[sizeof buffer - 1] = 0;

    printf("The length of string was %d byte.\n %s\n", nLength, buffer);

    fclose(pFile);

    return 0;
}