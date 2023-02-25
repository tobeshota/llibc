/* abs　絶対値を求める */

#include <stdio.h>
#include <stdlib.h>

int my_abs(int);

int my_abs(int i)
{
    /* 自作してください */
    if (i < 0)
        i = -i;
    return i;
}

int main(void)
{
    int i1, i2, i3;
    int ret1, ret2, ret3;

    /* 前準備 */
    i1 = 9876;

    /* 自作した関数を実行 */
    ret1 = my_abs(i1);

    /* 実行結果の確認 */
    if (ret1 != 9876)
    {
        /* 正の値が変化してしまっている */
        printf("Error1!!!\n");
        return -1;
    }

    /* 前準備 */
    i2 = -1234;

    /* 自作した関数を実行 */
    ret2 = my_abs(i2);

    /* 実行結果の確認 */
    if (ret2 != 1234)
    {
        /* 絶対値の計算がおかしい */
        printf("Error2!!!\n");
        return -1;
    }

    /* 前準備 */
    i3 = -2147483648; /* intの最小値 */

    /* 自作した関数を実行 */
    ret3 = my_abs(i3);

    /* 実行結果の確認 */
    if (ret3 != -2147483648)
    {
        /* 最小値の場合は値は変わらない */
        printf("Error3!!!\n");
        return -1;
    }

    printf("Clear!!!\n");

    return 0;
}