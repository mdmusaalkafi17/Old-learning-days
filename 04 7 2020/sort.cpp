#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    char ara[]={'1','2','a','b'};
    sort(ara, ara+4);
    printf("%s", ara);
}
