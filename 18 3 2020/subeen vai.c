#include<stdio.h>

int main()
{
    int total_marks[] = {56, 34, 34, 34, 34, 34, 78, 76, 67, 86,
                    67, 86, 67,65, 65, 90, 98, 87, 30, 40};
    int marks, i, count;

    for(marks = 34; marks <= 100; marks++) {
        count = 0;

        for(i = 0; i < 20; i++) {
            if(total_marks[i] == marks) {
                count++;
            }
        }

        printf("Marks: %d  Count: %d\n", marks, count);
    }

    return 0;
}
