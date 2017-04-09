//
// Created by Kentaro Kuwata on 2017/04/08.
//

#include <iostream>

using namespace std;

void ChangeToShowa(int* p)
{
    if(1926 < *p && *p < 1989)
        *p -= 1925;
    else
        *p = false;
}

void Showa()
{
    int nYear;

    cout << "西暦を入力してください > ";
    cin >> nYear;

    ChangeToShowa(&nYear);
    if(nYear)
        cout << "その年は昭和 " << nYear
             << " 年です。" << endl;
    else
        cout << "その年は昭和ではありません。" << endl;
}

int main()
{
    Showa();
    Showa();
    return 0;
}