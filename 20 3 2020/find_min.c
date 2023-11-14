#include<stdio.h>

int find_min(int ara[], int n)
{
    int i, min = ara[0];

    for(i = 1; i <= n; i++) {
        if(min > ara[i]) {
            min = ara[i];
        }
    }

    return min;
}

int main()
{
    int k[] = {10, 2, 32, 43, 42}, n = 5;

    printf("%d", find_min(k, n));
}
