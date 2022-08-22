#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    const int min = 0;
    const int max = 100;
    printf("这是一个猜数游戏，他的范围是%d~%d，你来猜猜看。\n", min, max);
    printf("请输入你想的一个数：\n");

    int guess = 0;

    //生成随机数
    srand(time(0));
    int result = rand()%100;
    // printf("%d",result);

    do
    {
        printf("请输入你想的一个数：\n");
        scanf("%d", &guess);
        if(guess>result){
            printf("太大啦，换一个吧\n");
        }else{
            printf("小了，换一个吧\n");
        }
    } while (guess != result);

    printf("你猜对了！喜提1毛钱\n");

    return 0;
}