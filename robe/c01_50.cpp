//
// Created by root on 8/25/17.
//

#include <stdio.h>

int main()
{
    FILE *pFile;

    pFile = fopen("test.txt", "w");
    fputs("Go ahead! Write a file!", pFile);
    fclose(pFile);

    return 0;
}