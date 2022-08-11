#include <stdio.h>
// include 包含
// std  standard标准  i input输入 o output输出  h  head头部

int main(){
    const int k=2; //常数
    int a=0;//上底
    int b=0;//下底
    int h=0;//高

    printf("请输入梯形的上底,下底和高（请使用整数并用逗号隔开）");
    scanf("%d,%d,%d",&a,&b,&h);
    printf("梯形的面积是%d",(a+b)*h/k);
    return 0;
}