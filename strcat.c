/* 文字列s1に文字列s2を連結させる。 */
#include <stdio.h>

char *my_strcat(char *, const char *);

char *my_strcat(char *restrict s1, const char *restrict s2)
{
    char *p = s1;

    //  s1を末尾まで進める
    while (*s1)
        s1++;
    //  s2に'\0'が見つかるまでコピー
    while (*s2)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }

    return p;
}

int main(void)
{
    char s1[80] = "abcde";
    char s2[80] = "fghij";

    my_strcat(s1, s2);
    puts(s1);

    return 0;
}