//
// Created by root on 8/25/17.
//
#include <iostream>

using namespace std;

int main()
{
    FILE* pFile;
    char buffer[128];

    pFile = fopen("test.txt", "r");
    fgets(buffer, 128, pFile);
    cout << buffer;
    fclose(pFile);

    return 0;
}