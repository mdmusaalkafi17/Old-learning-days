#include<stdio.h>

double add(double num1, double num2);

int main()
{
    double a, b, c;
    a = b = 10;
    c = add(a, b);

    printf("%lf", c);

    return 0;
}

double add(double num1, double num2) {
    double sum = num1 + num2;
    return sum;
}
