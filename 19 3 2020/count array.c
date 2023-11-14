#include<stdio.h>

int main()
{
    int total_marks[] = {86, 78, 58, 95, 34, 59, 78, 65 , 56, 66 , 90, 91, 93, 98, 78};
    int marks_count[101], i, mark;

    for(i = 0; i < 101; i++) {
        marks_count[i] = 0;
    }

    for(i = 0; i < 15; i++) {
        mark = total_marks[i];
        marks_count[mark]++;
    }

    for(i = 50; i <= 100; i++) {
        printf("Marks: %d       Count: %d\n", i, marks_count[i]);
    }

    return 0;
}
