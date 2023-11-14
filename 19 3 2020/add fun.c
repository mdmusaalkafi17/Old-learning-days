#include<stdio.h>

double add(double num1, double num2)
{
    double sum = num1 + num2;
    return sum;
}

int main()
{
    double a, b, c;
    a = b = 9.8;
    //c = add(a, b);
    printf("%0.2lf", add(a, b));
}
