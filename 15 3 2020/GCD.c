#include<stdio.h>

int main()
{
    int a, b, x, i;

    scanf("%d %d", &a, &b);

    if(a < b)
    {
        x = b;
    }
    else
    {
        x = a;
    }

    for(i = x; i >= 1; i--)
    {
        printf("%d\n", i);
        if(a % i == 0 && b % i == 0)
        {
            printf("GCD is %d", i);
            break;
        }

    }

    return 0;
}
