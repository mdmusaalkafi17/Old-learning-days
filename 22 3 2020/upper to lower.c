#include<stdio.h>

int main()
{
    char ch[] = "Bangladesh";

    int i, length = 10;

    for(i = 0; i <= length; i++) {
        if(ch[i] >= 65 && ch[i] <= 91) {
            ch[i] = ch[i] + 32;
        }
    }
     printf("%s", ch);
}
