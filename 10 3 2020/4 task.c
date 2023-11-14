#include<stdio.h>

int main()
{
    double num1, num2, value;
    char sign;

    printf("Please Enter a number:\n");
    scanf("%lf", &num1);

    printf("Please Enter another number:\n");
    scanf("%lf", &num2);

    value = num1 + num2;
    sign = '+';
    printf("%lf %c %lf = %lf\n", num1, sign, num2, value);

    value = num1 - num2;
    sign = '-';
    printf("%lf %c %lf = %lf\n", num1, sign, num2, value);

    value = num1 * num2;
    sign = '*';
    printf("%lf %c %lf = %lf\n", num1, sign, num2, value);

    value = num1 / num2;
    sign = '/';
    printf("%lf %c %lf = %lf\n", num1, sign, num2, value);

    return 0;
}
