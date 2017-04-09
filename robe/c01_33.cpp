//
// Created by Kentaro Kuwata on 2017/04/08.
//

#include <iostream>

using namespace std;

int main()
{
    int a;
    int* p = &a;

    a = 1;
    cout << " a = " << a << endl
         << "*p = " << *p << endl;

    *p = 5;
    cout << " a = " << a << endl
         << "*p = " << *p << endl;

    return 0;
}