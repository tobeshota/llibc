#include <stdio.h>
#include <string.h>

size_t my_strlen(const char *);

size_t my_strlen(const char *str)
{
    /* 自作してください */
    size_t len = 0;
    // strが終端文字'\0'になるまでlenをカウント
    while (str[len])
        len++;
    return len;
}

int main(void)
{
    char str[256];
    size_t ret;

    /* 前準備 */
    strcpy(str, "Hello! Good bye!");

    /* 自作した関数を実行 */
    ret = my_strlen(str);

    /* 実行結果の確認 */
    if (ret != 16)
    {
        /* 戻り値が正しくない！ */
        printf("Error1!!!\n");
        return -1;
    }

    printf("Clear!!!\n");

    return 0;
}