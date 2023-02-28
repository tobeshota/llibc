/* 文字列s1に文字列s2を連結させる。 */
#include <stdio.h>

size_t my_strlen(const char *);
char *my_strcpy(char *, const char *);
char *my_strcat(char *, const char *);

char *my_strcat(char *restrict s1, const char *restrict s2)
{
    my_strcpy(s1 + my_strlen(s1), s2);
    return s1;
}

size_t my_strlen(const char *str)
{
    /* 自作してください */
    size_t len = 0;
    // strが終端文字'\0'になるまでlenをカウント
    while (str[len])
        len++;
    return len;
}

char *my_strcpy(char *dst, const char *src)
{
    /* 自作してください */
    // 終端文字の直前まで1文字ずつコピー
    int i = 0;
    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }

    // 最後に終端文字を追加
    dst[i] = '\0';
    return dst;
}

int main(void)
{
    char s1[80] = "abcde";
    char s2[80] = "fghij";

    my_strcat(s1, s2);
    puts(s1);

    return 0;
}