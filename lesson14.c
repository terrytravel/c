#include <stdio.h>
int main()
{
    int number;
    number = 2;
    int cnt = 0;

    while (cnt < 50)
    {
        int i;

        int isprime = 1;
        for (i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime == 1)
        {
            printf("%d\n", number);
            cnt++;
        }
        number++;
            goto out ;
    }
    out:
    printf("\n");
     return 0;
};