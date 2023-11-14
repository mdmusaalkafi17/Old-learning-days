#include<stdio.h>
using namespace std;
int main()
{

    int x = 10;
    int *p;

    p = &x;

    printf("Value of x is : %d\n", x);

    *p = 20;

    printf("Value of x is : %d\n", x);
    printf("Address of x : = %p\n", &x);
    printf("value of x is %p\n", p);

    return 0;
}

