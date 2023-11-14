#include<stdio.h>

int main()
{
    double ft_marks, st_marks, final_marks;
    double  total_marks;

    ft_marks = 80;
    st_marks = 74;
    final_marks = 97;

    total_marks = ft_marks / 4 + st_marks / 4 + final_marks / 2;

    printf("%0.0lf", total_marks);

    return 0;
}
