#include <stdio.h>
#include <string.h>

char *my_strcpy(char *, const char *);

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
    char src[256];
    char dst[256];
    char *ret;

    /* 前準備 */
    strcpy(src, "Hello! Good bye!");
    memset(dst, 0xFF, sizeof(dst));

    /* 自作した関数を実行 */
    ret = my_strcpy(dst, src);

    /* 実行結果の確認 */
    if (ret != dst)
    {
        /* 戻り値が正しくない！ */
        printf("Error1!!!\n");
        return -1;
    }

    /* 実行結果の確認 */
    if (my_strncmp(dst, "Hello! Good bye!", strlen("Hello! Good bye!")) != 0)
    {
        /* ちゃんとコピーできてない！ */
        printf("Error2!!!\n");
        return -1;
    }

    /* 実行結果の確認 */
    if (my_strcmp(dst, "Hello! Good bye!") != 0)
    {
        /* 多分文字列の最後に必要なアレが足りていない */
        printf("Error3!!!\n");
        return -1;
    }

    printf("Clear!!!\n");

    return 0;
}