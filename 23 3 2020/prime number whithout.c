#include<stdio.h>

int main()
{
    int n, i, factor = 0;
    {
        scanf("%d", &n);

        if(n < 2)
            {
                printf("Not prime");
            }
        for(i = 2; i < (n-1); i++)
        {
            if(n % i == 0)
            {
                factor++;
                break;
                }
        }

        if(factor > 0)
        {
            printf("Not Prime\n");
        }
        else
        {
            printf("Prime\n");
        }
    }
}
