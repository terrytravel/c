#include <stdio.h>
#include <stdbool.h>

bool checkIsPrimeNumber(int number)
{
    int isprime = 1;
    int i = 0;
    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            isprime = 0;
        }
    }
    if (isprime == 0)
    {
        printf("不是素数");
        return false;
    }
    else
    {
        printf("是素数");
        return true;
    }
}

int main()
{

    int x = 0;
    printf("请输入任意一个数");
    scanf("%d", &x);

    bool result = false;
    result = checkIsPrimeNumber(x);
    printf("结果是%d", result);
};