#include<stdio.h>

int find_max(int ara[], int n)
{
    int max, i;

    max = ara[0];

    for(i = 1; i < n; i++)
    {
        if(ara[i] > max)
        {
            max = ara[i];
        }
    }

    return max;
}

int main()
{
    int k[] = {1, 4, 10, 2, 4, 2,100}, re, n = 7;
    re = find_max(k, n);
    printf("%d", re);

    printf("size = %d\n", sizeof(k));
}
