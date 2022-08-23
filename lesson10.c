#include <stdio.h>
int main(){
    
    //设置变量
    int number;
    int all = 0;
    int count = 0;
    
    scanf("%d",&number);
    while (number != -1){
        all+=number;
        count++;
        scanf("%d",&number);
    }
    

    printf("%f",1.0*all/count);
    return 0;
};