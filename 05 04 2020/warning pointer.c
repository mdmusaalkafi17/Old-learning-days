#include<stdio.h>

int main()
{
    double pi = 3.1416;

    int *ptr; ///int pointer p;

    ptr = &pi;

    printf("value of pi: %lf\n", pi);  ///content of p;
    printf("value of pi: %lf\n", *ptr);
}

