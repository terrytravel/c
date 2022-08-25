//整数求逆
#include <stdio.h>
int main(){
    int count = 0;
    scanf("%d",&count);
    int digit;
    int ret =0;

    while (count>0){
        digit=count%10;
        printf("%d",digit);
        ret=ret*10+digit;
        count/=10;
    }
    return 0;
};