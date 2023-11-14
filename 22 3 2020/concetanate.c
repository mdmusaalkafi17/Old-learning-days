#include<stdio.h>

int main()
{
    char str1[] = "Bangla", str2[] = "desh", str3[100];
    int i, j, length1 = 6, length2 = 4;

    for(i = 0; i < length1; i++)
    {
        str3[i] = str1[i];
    }

    for(i = 0, j = length1; i < length2; i++, j++)
    {
        str3[j] = str2[i];
    }
    /*printf("%d\n", j);*/
    str3[j]= '\0';

    printf("%s\n", str3);
}
