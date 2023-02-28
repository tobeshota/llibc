/* 文字列を比較する。 */
#include <stdio.h>
int my_strcmp(const char *, const char *);

int my_strcmp(const char *s1, const char *s2)
{
    while (*s1 == *s2)
    {
        if (*s1 == '\0')
            return 0;
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}

int main(void)
{
    printf("%d\n", my_strcmp("abc", "abc"));
    printf("%d\n", my_strcmp("abc", "ab"));
    printf("%d\n", my_strcmp("abc", "abc123"));

    return 0;
}