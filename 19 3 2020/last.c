#include<stdio.h>

int main()
{
    int total_marks[] = {1, 2, 6, 6, 3, 6, 2, 6, 8, 5, 7};
    int i, j, marks_count[11], mark;

    for(i = 0; i < 11; i++)
    {
        marks_count[i] = 0;
    }

    for(i = 0; i < 11; i++)
    {
        marks_count[total_marks[i]]++;

        for(j = 0; j < 11; j++)
        {
            printf("%d ", marks_count[j]);
        }
    }

    return 0;
}
