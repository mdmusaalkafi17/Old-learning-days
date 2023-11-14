#include<stdio.h>

int main()
{
    int number, remainder;

    number = 12;

    remainder = number - 2*(number/2);

    printf("%d\n", remainder);

    if(remainder == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }

    return 0;
}
