#include <stdio.h>
#include <ctype.h>

int my_isupper(int);

int my_isupper(int c)
{
    /* 自作してください */
    // cが大文字であれば0以外の整数を返却
    if (c >= 'A' && c <= 'Z')
        return c;
    // cが大文字でなければ整数0を返却
    else
        return 0;
}

int main(void)
{
    int c1, c2, c3, c4;
    int ret1, ret2, ret3, ret4;

    /* 前準備 */
    c1 = 'A';

    /* 自作した関数を実行 */
    ret1 = my_isupper(c1);

    /* 実行結果の確認 */
    if (ret1 == 0)
    {
        /* 大文字と判断できていない */
        printf("Error1!!!\n");
        return -1;
    }

    /* 前準備 */
    c2 = 'Z';

    /* 自作した関数を実行 */
    ret2 = my_isupper(c2);

    /* 実行結果の確認 */
    if (ret2 == 0)
    {
        /* 大文字と判断できていない */
        printf("Error2!!!\n");
        return -1;
    }

    /* 前準備 */
    c3 = 999999;

    /* 自作した関数を実行 */
    ret3 = my_isupper(c3);

    /* 実行結果の確認 */
    if (ret3 != 0)
    {
        /* 文字以外が大文字と判断されている */
        printf("Error3!!!\n");
        return -1;
    }

    /* 前準備 */
    c4 = 'z';

    /* 自作した関数を実行 */
    ret4 = my_isupper(c4);

    /* 実行結果の確認 */
    if (ret4 != 0)
    {
        /* 小文字が大文字と判断されている */
        printf("Error4!!!\n");
        return -1;
    }

    printf("Clear!!!\n");

    return 0;
}