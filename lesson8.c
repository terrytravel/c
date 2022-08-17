#include <stdio.h>
int main()
{

    // if
    /* int isHappy  = 1333;
    if (isHappy){
        printf("今天我很开心");
    } */

    //  if else
    //  int starcoin = 10000;
    // if (starcoin>500){
    // printf("至少可以玩60分钟");
    // }else{
    // printf("不能玩游戏！！！！！！！");
    // }

    // is / else if / else
    /*  int starcoin = 3;
     if (starcoin>10000){
         printf ("可以兑换NUC");
     }else if(starcoin>8000){
         printf("可以兑换平板");
     }else {
         printf("币币不足，继续加油把");
     } */

    int cube = 0;
    int n = 0;
    int count = 0;

    printf("请输入正方形边长和要询问的涂色面的数量");
    scanf("%d,%d", &n, &cube);

    switch (cube)
    {
    case 3:
        count = 8;
        break;
    case 2:
        count = (n - 2) * 12;
        break;
    case 1:
        count = (n - 2) * (n - 2) * 6;
        break;
    case 0:
        count = (n - 2) * (n - 2) * (n - 2);
        break;
    default:
        printf("白嫖500starcoin哈哈哈哈哈哈");
    }

    printf("涂色%d面的小正方体是%d个", cube, count);

    printf("success");

    return 0;
};