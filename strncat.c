/* 指定文字数以下の文字列を連結する。 */
#include <stdio.h>

char *strncat(char *, const char *, size_t);

char *strncat(char *restrict s1, const char *restrict s2, size_t n)
{
    char *p = s1;
    // s1を末尾まで進める
    while (*s1)
        s1++;
    // nの数だけs1にs2をコピーする
    while (n--)
    {
        // s2に'\0'が見つかればコピー終了
        if (!(*s2))
            break;
        *s1 = *s2;
        s1++;
        s2++;
    }
    // s1の末尾に'\0'を入れる
    *s1 = '\0';

    return 0;
}

int main(void)
{
    char s1[80] = "abcde";
    char s2[80] = "fghij";

    strncat(s1, s2, 3);
    puts(s1);
}