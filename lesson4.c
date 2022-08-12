#include <stdio.h>
int main(){
    //存性别 byte=8bits
    char sex = 0;
    //存身高
    double height = 0;

    printf("请输入你的性别(男1/女0)：");
    scanf("%c",&sex);

    printf("请输入您的身高(例如1.6)：");
    scanf("%lf",&height);

    if(sex==0){
        printf("你的性别是女，您的身高是%f米",height);
    }else{
        printf("你的性别是男，您的身高是%f米",height);
    }

    return 0;
}