#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_atoi(const char *);
int my_isspace(int ch)
{
    return ch == ' ' || ch == '\f' || ch == '\n' || ch == '\r' || ch == '\t' || ch == '\v';
}

int my_atoi(const char *str)
{
    /* 自作してください */
    int sign = 1; //  符号
    int num = 0;  //  返却値
    int i = 0;    //  文字列配列の添え字

    // 先頭文字が空白以外の文字列になるまで繰り返す
    while (my_isspace(str[i]))
        i++;

    // 符号判定
    switch (str[i])
    {
    case '+':
        sign = +1;
        i++;
        break;
    case '-':
        sign = -1;
        i++;
        break;
    default:
        sign = +1;
        break;
    }

    // 先頭文字が数字である（'0'~'9'の間にある）かどうかを調べる
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            num = num * 10 + (str[i] - '0');
            i++;
        }
        else
            break;
    }

    // 符号を考慮
    num *= sign;

    return num;
}

int main(void)
{
    static char str1[256]; /* staticはスタックオーバーフロー対策 */
    static char str2[256];
    static char str3[256];
    static char str4[256];
    static char str5[256];
    static char str6[256];
    static char str7[256];
    int ret1, ret2, ret3, ret4, ret5, ret6, ret7;

    /* 前準備 */
    strcpy(str1, "1234");

    /* 自作した関数を実行 */
    ret1 = my_atoi(str1);

    /* 実行結果の確認 */
    if (ret1 != 1234)
    {
        /* 変換結果がおかしい */
        printf("【ret1】%d\n", ret1);
        printf("Error1!!!\n");
        return -1;
    }

    /* 前準備 */
    strcpy(str2, "");

    /* 自作した関数を実行 */
    ret2 = my_atoi(str2);

    /* 実行結果の確認 */
    if (ret2 != 0)
    {
        /* 文字数0の時の動作がおかしい */
        printf("Error2!!!\n");
        return -1;
    }

    /* 前準備 */
    strcpy(str3, "00001234");

    /* 自作した関数を実行 */
    ret3 = my_atoi(str3);

    /* 実行結果の確認 */
    if (ret3 != 1234)
    {
        /* 先頭の0扱いがおかしい */
        printf("Error3!!!\n");
        return -1;
    }

    /* 前準備 */
    strcpy(str4, "    1234");

    /* 自作した関数を実行 */
    ret4 = my_atoi(str4);

    /* 実行結果の確認 */
    if (ret4 != 1234)
    {
        /* 先頭の空白文字の扱いがおかしい */
        printf("Error4!!!\n");
        return -1;
    }

    /* 前準備 */
    strcpy(str5, "    +1234");

    /* 自作した関数を実行 */
    ret5 = my_atoi(str5);

    /* 実行結果の確認 */
    if (ret5 != 1234)
    {
        /* プラス符号の扱いがおかしい */
        printf("Error5!!!\n");
        return -1;
    }

    /* 前準備 */
    strcpy(str6, "    -1234");

    /* 自作した関数を実行 */
    ret6 = my_atoi(str6);

    /* 実行結果の確認 */
    if (ret6 != -1234)
    {
        /* マイナス符号の扱いがおかしい */
        printf("Error6!!!\n");
        return -1;
    }

    /* 前準備 */
    strcpy(str7, "    12 34");

    /* 自作した関数を実行 */
    ret7 = my_atoi(str7);

    /* 実行結果の確認 */
    if (ret7 != 12)
    {
        /* 数字以外の文字の扱いがおかしい */
        printf("Error7!!!\n");
        return -1;
    }

    printf("Clear!!!\n");

    return 0;
}
