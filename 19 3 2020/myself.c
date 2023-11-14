#include<stdio.h>

int main()
{
    int friends_tk[] = {10, 20, 30, 10, 10};
    int i, tk_count[31], index;

    for(i = 0; i < 31; i++)
    {
        tk_count[i] = 0;
    }
    for(i = 0; i < 5; i++)
    {
        tk_count[friends_tk[i]]++;
    }
    for(i = 10; i <= 30; i++)
    {
        printf("Taka index: %d   Friend Taka given: %d\n", i, tk_count[i]);
    }

}
