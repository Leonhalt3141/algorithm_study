//
// Created by Kentaro Kuwata on 2017/04/11.
//

#include <stdio.h>

int strlen(char* str)
{
    char* p;
    for(p = str; *p; p++);
    return (int) (p - str);
}

void DispLength(char* str)
{
    printf("文字列 [%s] の長さは %d バイトです。\n", str, strlen(str));
}

int main(){
    DispLength("ホメホメーる");
    DispLength("嘘つきゃバレるぜドルバッキー");
    DispLength("a");
    DispLength("あ");
    DispLength("あい");
    DispLength("");
    return 0;
}