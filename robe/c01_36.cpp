//
// Created by Kentaro Kuwata on 2017/04/08.
//

#include <stdio.h>

void DisplayAddress(char* pointer)
{
    int i;

    printf("pointer     : %d\n", pointer);
    for(i=0; i<10; i++)
        printf("&pointer[%d] : %d\n", i, &pointer[i]);
}

int main()
{
    int i;
    char array[10];

    printf("array     : %d\n", array);
    for(i=0; i<10; i++)
        printf("&array[%d] : %d\n", i, &array[i]);
    printf("\n");
    DisplayAddress(array);

    return 0;
}