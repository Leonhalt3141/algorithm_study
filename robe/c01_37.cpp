//
// Created by Kentaro Kuwata on 2017/04/08.
//

#include <iostream>

using namespace std;

int main()
{
    int a;
    int& r = a;

    a = 0;
    cout << "a  = " << a << endl
         << "r  = " << r << endl << endl;

    r = 100;
    cout << "a  = " << a << endl
         << "r  = " << r << endl << endl;

    // unsigned intにすると、aのアドレスの値が大きすぎてコンパイルが通らない。
    // パソコンによるかも。
    cout << "&a = " << (unsigned long int)&a << endl
         << "&r = " << (unsigned long int)&r << endl;

    return 0;
}