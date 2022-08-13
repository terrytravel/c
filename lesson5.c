#include <stdio.h>
int main()
{
    //计数单位
    const int k = 30;

    const int t = 250;
    // 存输入的时间
    int time = 0;

    printf("已知%d星星币可兑换%d分钟电子娱乐时间，您想玩多久？（分钟）", t, k);

    scanf("%d", &time);

    //计算得到整数部分
    int count = time / k;
    //计算超时部分
    int overflow = time % k;

    int price = 0;
    if (overflow == 0)
    {
        price = count * t;
    }
    else
    {
        price = (count + 1) * t;
    }

    printf("您要支付%d星星币", price);
    return 0;
}