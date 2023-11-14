#include<stdio.h>

int main()
{
    int total_marks[] = {50, 60, 70 , 70, 80};

    int marks, i, count;

    for(marks = 50; marks <= 80; marks++) {
        count = 0;
        for(i = 0; i < 5; i++) {
            if(marks == total_marks[i]) {
                count++;
            }
        }

        printf("%d is %d\n", marks, count);
    }

    return 0;
}
