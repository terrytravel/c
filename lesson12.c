//求素数
#include <stdio.h>
int main(){
    int number;
    scanf("%d ",&number);
    int i;
    //判断是否是素数  
    int isprime = 1;
    for(i=2;i<number;i++){
        if(number%i==0){
            isprime=0;
        }
    }
    if (isprime==0){
        printf("不是素数");

    }else{
        printf("是素数");
    }
    return 0;
};