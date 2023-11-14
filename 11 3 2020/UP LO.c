#include<stdio.h>

int main()
{
    char ch;

    ch = 'a';

    if(ch >= 'a' && ch <= 'z'){
        printf("Lower");
    }
    else if(ch >= 'A' && ch <= 'Z'){
        printf("Upper");
    }

    return 0;
}
