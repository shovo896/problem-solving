#include <stdio.h>

int main(void)
{
    int a = 10;
    printf("%d\n", a);
    printf("%p\n", (void *)&a);
    return 0;
}