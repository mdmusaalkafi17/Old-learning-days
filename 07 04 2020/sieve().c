#include<stdio.h>

int main()
{
    int n[50], i, j,p;

    memset(n, -1, sizeof(n));
    printf("%d\n", sizeof(n));
    for(i = 2; i <= 50; i++)
    {
        if(n[i]==-1)
        {
            for(j = 2; i*j < 50; j++)
            {
                n[i*j] = 0;
            }
        }

        if(n[i]==-1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
