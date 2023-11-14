#include<stdio.h>

int main()
{
    int n = 5, i = 0;

    while(i < 10){
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }

    return 0;
}
