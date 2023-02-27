/* 空白文字かどうか判定する。 */
#include <stdio.h>

// 引数chが空白文字であれば 0以外を返し、そうでなければ 0 を返す。
int my_isspace(int);

int my_isspace(int ch)
{
    return ch == ' ' || ch == '\f' || ch == '\n' || ch == '\r' || ch == '\t' || ch == '\v';
}

int main(void)
{
    int c = ' ';
    return my_isspace(c); //  空白文字であるから0以外が返ってくる
}