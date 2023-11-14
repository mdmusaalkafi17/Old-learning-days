#include<stdio.h>

int main()
{
    int num1, num2;

    printf("Please Enter a Number:\n");
    scanf("%d", &num1);

    printf("Please Enter another number\n");
    scanf("%d", &num2);

    printf("%d + %d = %d\n", num1, num2, num1+num2);
    printf("%d - %d = %d\n", num1, num2, num1-num2);
    printf("%d * %d = %d\n", num1, num2, num1*num2);
    printf("%d / %d = %d\n", num1, num2, num1/num2);

    return 0;

}
