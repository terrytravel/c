#include <stdio.h>
int main()
{

    // break
    // const int count = 1000;
    // for (int i = 0; i < count; i++)
    // {
    //     printf("%d\n",i);
    //     if(i==100){
    //         printf("妈妈去世了");
    //         break;
    //     }
    // }

    // continue
    const int count = 50;
    for (int i = 0; i < count; i++)
    {
        if (i == 23)
        {
            printf("23号是听话的小朋友\n");
            continue;
        }
        printf("%d小朋友做小动作\n", i);
    }

    return 0;
};