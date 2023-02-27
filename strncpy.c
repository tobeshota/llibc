#include <stdio.h>

char *my_strncpy(char *dst, const char *src, size_t n)
{
    // 終端文字の直前まで1文字ずつコピー
    int i = 0;
    while (src[i] || i <= n)
    {
        dst[i] = src[i];
        i++;
        // 指定文字数を超えた場合、コピー終了
        if (i >= n)
            return dst;
    }

    // 最後に終端文字を追加
    dst[i] = '\0';
    return dst;
}

int main(void)
{
    char src[256] = "abcde";
    char dst[256];

    my_strncpy(dst, src, 3);

    printf("%s\n", dst);

    return 0;
}