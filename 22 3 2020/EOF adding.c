#include<stdio.h>

int main()
{
    int n1, n2, sum;

    while(2==scanf("%d %d", &n1, &n2)) {
        sum = n1 + n2;
        printf("%d\n", sum);
    }
}
