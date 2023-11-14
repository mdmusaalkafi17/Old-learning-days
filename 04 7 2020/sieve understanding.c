#include<stdio.h>
#include<math.h>
int ara[1000001];

void sieve()
{
int i, j, size = 1000001, root;
//int ara[size];

for(i = 2; i < size; i++)
{
    ara[i]=1;
}

root=sqrt(size);

for(i = 2; i <= root; i++)
    {
    if(ara[i]==1)
    {

        for(j = 2; i*j <= size; j++)
        {
            ara[i * j]=0;
        }
    }

}
}
int main()
{

int count = 0;
    sieve();
    for(int i = 2; i <= 1000001; i++)
    {
     if(ara[i]==1) printf("%d, ", i);
     count++;
    }

    printf("count = %d\n", count);
}
