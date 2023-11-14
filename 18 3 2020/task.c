#include<stdio.h>

int main()
{
    int ft_marks[] = {56, 34, 34, 34, 34, 34, 78, 76, 67, 86,
                    67, 86, 67, 65, 65, 90, 98, 87, 30, 40};

    int st_marks[] = {56, 34, 34, 34, 34, 34, 78, 76, 67, 86,
                    67, 86, 67, 65, 65, 90, 98, 87, 30, 40};

    int final_marks[] = {56, 34, 34, 34, 34, 34, 78, 76, 67, 86,
                    67, 86, 67,65, 65, 90, 98, 87, 30, 40};

    double total_marks[20];
    int i, j, count = 0;

    for(i = 0; i < 20; i++) {
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;
    }

    for(i = 0; i < 20; i++) {
        for(j = 0; j < 20; j++) {
            if(total_marks[i] == total_marks[j]) {
                count = count + 1;
                }
            }
        printf("%0.0lf counter is : %d\n", total_marks[i], count);
        count = 0;
    }

    return 0;
}
