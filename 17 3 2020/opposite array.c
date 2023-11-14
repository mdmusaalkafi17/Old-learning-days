#include<stdio.h>

int main()
{
    int ara[5] = {10, 20, 30, 40, 50};
    int ara_rev[5], i, j;

    for(i = 4, j = 0; i >= 0; i--, j++)
    {
        ara_rev[j] = ara[i];
        printf("%d, ",ara_rev[j]);
        /*for(i = 1; i <=9; i++ )
        {
            printf("%d th element is: %d\n", i, ara_rev[j]);
        }
*/

    }

    return 0;
}

