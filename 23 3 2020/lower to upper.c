#include<stdio.h>

int main()
{
    char country[80];
    gets(country);

    int i, length;

    length =  10;

    for(i = 0; i < length; i++) {
        if(country[i] >=97 && country[i] <=122) {
            country[i] = country[i] - 32;
        }
    }
    printf("%s\n", country);

    return 0;
}
