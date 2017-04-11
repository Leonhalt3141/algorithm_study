//
// Created by Kentaro Kuwata on 2017/04/11.
//

#include <iostream>

using namespace std;

int main()
{
    int array[4];

    cout << "&array[1]     = " << (long int)&array[1] << endl
         << "&array[1] + 1 = " << (long int)(&array[1] + 1) << endl
         << "&array[2]     = " << (long int)&array[2] << endl;

    return 0;
}