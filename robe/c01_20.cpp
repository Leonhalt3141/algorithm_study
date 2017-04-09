//
// Created by Kentaro Kuwata on 2017/04/06.
// http://www7b.biglobe.ne.jp/~robe/cpphtml/

#include <iostream>

using namespace std;

int main(){
    int a, b, sign, result,i;

    for(i = 0; i < 5; i++){
        cout << "No. 1 > ";
        cin >> a;
        cout << "No. 2 >";
        cin >> b;
        cout << "Which one? (1: +, 2: -, 3: *, 4: / ) > ";
        cin >> sign;

        /*
        if(sign == 1)
            result = a + b;
        else if(sign == 2)
            result = a - b;
        else if(sign == 3)
            result = a * b;
        else if(sign == 4)
            result = a / b;
        else
        {
            cout << "Be serious!" << endl;
            continue;
        }
        cout << "Answer: " << result << endl;
         */

        switch(sign)
        {
            case 1:
                result = a + b; break;
            case 2:
                result = a - b; break;
            case 3:
                result = a * b; break;
            case 4:
                result = a / b; break;
            default:
                cout << "Be serious!" << endl;
                continue;
        }
        cout << "Answer: " << result << endl;
    }
    return 0;
}

