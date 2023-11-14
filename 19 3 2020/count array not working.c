#include<stdio.h>

int main()
{
    int total_marks[] = {86, 90, 90, 80, 85, 94, 100};
    int marks_count[101], i;

    for(i = 0; i < 101; i++) {
        marks_count[i] = 0;
    }

    for(i = 0; i < 7; i++) {
        marks_count[total_marks[i]] = marks_count[total_marks[i]] + 1;
    }

    for(i = 80; i <= 100; i++) {
        printf("Marks %d   Count: %d\n", i, marks_count[i]);
    }
}
