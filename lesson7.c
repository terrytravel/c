#include <stdio.h>
int main()
{
    int i = 1;
    int total = 0;
    while (i <= 100)
    {
        total += i;
        printf("total=%d\n", total);

        //递增运算符表达式结果
        //x++为x，++x为x+1
        //但x本身在运算后都变成x+1了
        int x = i++;
        printf("i=%d,x=%d\n", i, x);
    }
    return 0;
}