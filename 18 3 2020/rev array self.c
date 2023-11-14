#include<stdio.h>

int main()
{
    int ara[] = {10, 20 , 30, 40 , 50};
    int ara2[5], i, j;

    for(i = 0, j = 4; i < 5; i++, j--) {
        ara2[i] = ara[j];
    }

    for(i = 0; i < 5; i++) {
        ara[i] = ara2[i];
    }

    for(j = 0; j < 5; j++) {
        printf("%d\n", ara[j]);
    }

    return 0;
}
