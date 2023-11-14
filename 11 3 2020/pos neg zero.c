#include<stdio.h>

int main()
{
    int n;

    n = -9;

    if(n > 0){
        printf("Positive");
    }
    else if(n < 0){
        printf("Negative");
    }
    else if(n == 0){
        printf("Zero");
    }

    return 0;
}
