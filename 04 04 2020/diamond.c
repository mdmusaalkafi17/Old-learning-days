#include<stdio.h>

int main()
{
    int row, col, space_h, space;

    for(row = 1; row <= 11; row++)
    {
        for(space_h = 0, space = 0; space <=6; space++,space_h--)
        {
            for(int col_h= 0, col = 11; col >=1; col--, col_h++)
            {
                printf("C");
            }
            printf("\n");
        }
    }
}
