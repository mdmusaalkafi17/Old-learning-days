#include<stdio.h>

int main()
{
    int my_array[4] = {5, 10, 15, 40};

    my_array[1] = 100;
    my_array[3] = 200;
    my_array[4] = 300;


    printf("%d, %d, %d\n", my_array[1], my_array[0], my_array[4]);
}
