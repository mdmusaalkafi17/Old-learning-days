#include<stdio.h>

int main()
{
    int ft_marks[] = {86, 89, 98, 99, 88, 66, 99, 66, 66, 45, 34, 34,
                        14, 66, 33, 66, 43, 15, 15, 20};

    int st_marks[] = {86, 89, 98, 99, 88, 66, 99, 66, 66, 45, 34, 34,
                        14, 66, 33, 66, 43, 15, 15, 20};

    int final_marks[] = {86, 89, 98, 99, 88, 66, 99, 66, 66, 45, 34,
                        34, 14, 66, 33, 66, 43, 15, 15, 20};
    double total_marks[20];
    int roll = 20, i, j;

    for(i = 0; i < roll; i++) {
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;
    }
    for(i = 1; i <= roll; i++) {
        printf("Roll: %d \t Marks: %0.0lf\n", i, total_marks[i-1]);
    }

    return 0;
}
