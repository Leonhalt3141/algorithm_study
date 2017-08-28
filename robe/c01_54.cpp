//
// Created by root on 8/28/17.
//

#include <stdio.h>
#include <string.h>

int main()
{
    FILE* pFile;
    char buffer[512];
    int i;

    int nLength;
    int temp;

    printf("Please input strings > ");
    gets(buffer);

    pFile = fopen("fprintf.txt", "w");
    fprintf(pFile, "%d\n", strlen(buffer));
    for(i = 0; buffer[i]; i++)
    {
        fprintf(pFile, "%02X", (unsigned char)buffer[i]);
    }
    fclose(pFile);

    FILE* rFile;

    rFile = fopen("fprintf.txt", "r");
    if (rFile == NULL)
        return 0;

    fscanf(rFile, "%d", &nLength);
    printf("Length of string is %d byte. \n", nLength);

    for (i=0; i<nLength; i++)
    {
        fscanf(rFile, "%d", &temp);
        putchar(temp);
    }
    fclose(rFile);

    return 0;
}
