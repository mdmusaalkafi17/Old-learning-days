#include<stdio.h>

int string_length(char str[])
{
    int i, length = 0;
    for(i = 0; str[i] != '\0'; i++) {
            length++;
    }
    return length;
}

int main()
{
    char country[100], ch[100];

    while(1 == scanf("%s %s", country, ch)){

    int length = string_length(country);

    printf("%d\n", length);
}
}
