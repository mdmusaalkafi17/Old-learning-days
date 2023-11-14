#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int size;
    scanf("%d", &size);
    int ara[size], i, j;



    //scanf("%d", &i);

    for(j = 0; j < size; j++)
    {
        scanf("%d", &ara[j]);
    }
    sort(ara, ara+size);
    for(j = 0; j < size; j++)
    {
        printf("%d ", ara[j]);
    }
    printf("\n");

    //sort(ara, (ara+size));

}
