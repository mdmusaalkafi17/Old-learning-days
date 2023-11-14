#include<stdio.h>

int main()
{
    char input[1000];
    gets(input);

    int i;

    for(i = 0; i <= strlen(input)-1; i++)
    {
        if(input[i] >= 65 && input[i] <= 91,  input[i] >= 97 && input[i] <= 123 )
        {
            printf("%c", input[i] );
        }
        if(input[i]==' ')
        {
            printf("\n");
        }

    }
    return 0;
}
