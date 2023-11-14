#include<stdio.h>

int main()
{
    int ara[] = {1, 2, 3, 5, 6, 7}, i, m, l = 0, r = ;
    int n = 6;

    while(l <= r) {

        m = (l + r) / 2;

        if(m == n) {
            break;
        }

        if(n < ara[m]) {
            r = m - 1;
        }

        else {
            l = m + 1;
        }
    }

    printf("%dth", m);

}
