/* 文字列を指定文字数だけ比較する。 */
#include <stdio.h>

int my_strncmp(const char *, const char *, size_t);

int my_strncmp(const char *s1, const char *s2, size_t n)
{
    // s1 と s2 を、先頭から n文字だけ比較する。ただし、ヌル文字が現れた時点で終了する。
    while (n && *s1 && *s2)
    {
        // s1とs2の値が異なる場合には、s1の値-s2の値を返却する
        if (*s1 != *s2)
            return (unsigned char)*s1 - (unsigned char)*s2;
        s1++;
        s2++;
        n--;
    }
    if (!n)
        return 0; // while文による繰り返し終了後、nが終端文字まで到達している場合、正常終了として0を返す
    if (*s1)
        return 1; //  while文による繰り返し後、s1の値が0でない（残っている）場合、1を返す
    return -1;    //  while文による繰り返し後、s2の値が0でない（残っている）場合、1を返す
}

int main(void)
{
    printf("%d\n", my_strncmp("abcde", "abc", 3));
    printf("%d\n", my_strncmp("abcde", "ab", 3));
    printf("%d\n", my_strncmp("abcde", "abc123", 3));
}