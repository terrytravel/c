#include <stdio.h>
int main()
{
    // 通过snippet快速生成复用代码段
    int a = 54;
    int b = 25;

    int c = a & b;
    int d = a | b;

    printf("%d,%d", c, d);
    return 0;
};