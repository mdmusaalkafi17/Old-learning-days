#include<stdio.h>

int main()
{
    char ch[30];
    gets(ch);
    int i = 0;

    for(i = 0; ch[i] != '\0'; i++) {
            printf("%c\n", ch[i]);
    }
}
