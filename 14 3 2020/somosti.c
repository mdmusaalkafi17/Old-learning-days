#include<stdio.h>

int main()
{
    int i, count = 0;

    for(i = 1; i <= 1000; i++){
        count = count + i;
    }
    printf("%d\n", count);

    return 0;
}
