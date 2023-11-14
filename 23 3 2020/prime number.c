#include<stdio.h>

int is_prime(int n)
{
    printf("%d\n", n);
    int i, j = 0;
    for(i = 2; i < n; i++) {
        if(n%i == 0) {
                printf("if i = %d\n", i);
            return 0;
            break;


        }
        else{
            printf("else i = %d\n", i);
        }
    }

    return 1;
}

int main()
{
    int n;
    while(1)
    {
    scanf("%d", &n);
    int d = is_prime(n);
    //is_prime(n);
    //printf("%d\n", n);
    if(d == 0) {
        printf("Not prime\n");
    }
    else {
        printf("Prime\n");
    }
}
}
