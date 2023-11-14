#include<stdio.h>

int main()
{
    int n = 0, i, m = 5;

    for(i = 1; i <= 10; i = i + 1){
        n = n + m;
        printf("%d X %d = %d\n", m, i, n);
    }

    return 0;
}
