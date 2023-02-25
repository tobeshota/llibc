#include <stdio.h>

int main(void)
{
    char str[256] = "Hello! Good bye!";
    size_t len = 0;

    while (str[len++])
        ;
    printf("len = %zu\n", len);

    return 0;
}