#include<stdio.h>
#include<string.h>

int main()
{
    char s[1002], word[100];
    int i, j, flag = 0;

    gets(s);

    int len = strlen(s);

    for(i = 0, j = 0; i <= len; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            if(flag == 0)
            {
                word[j] = s[i]-32;
                flag = 1;
                j++;
            }

            else {
                word[j] = s[i];
                j++;
            }
        }

        else if(s[i] >= 'A' && s[i] <='Z')
        {
            word[j]=s[i];
            j++;
        }

        else
        {
            flag = 0;

            word[j]='\0';

            printf("%s\n", word);

            j = 0;
        }
    }
}
