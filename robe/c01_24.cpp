//
// Created by Kentaro Kuwata on 2017/04/06.
// http://www7b.biglobe.ne.jp/~robe/cpphtml/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i;
    char szHello[] = "やぁ、こんにちは";

    cout << "「" << szHello << "」を文字コードに変えると、" << endl;

    for(i = 0; i < strlen(szHello); i++)
    {
        cout << (int)(unsigned char)szHello[i] << ", ";
    }

    cout << (int)(unsigned char)szHello[i] << endl
        << "になります。" << endl;

    return 0;
}
