//
// Created by root on 8/29/17.
//
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    FILE* pFile;
    FILE* rFile;
    char buffer[512];
    int nLength;

    printf("Please input any strings> ");
    gets(buffer);

    pFile = fopen("fwrite.txt", "wb");

    nLength = strlen(buffer);
    fwrite(&nLength, 4, 1, pFile);
    fwrite(buffer, 1, nLength + 1, pFile);

    fclose(pFile);

    rFile = fopen("fwrite.txt", "rb");
    if (pFile == NULL)
        return 0;

    fread(&nLength, 4, 1, rFile);
    fread(buffer, 1, 512, rFile);
    buffer[511] = 0;

    printf("The length of the string is %d byte\n%s\n", nLength, buffer);

    fclose(0);

    return 0;
}
