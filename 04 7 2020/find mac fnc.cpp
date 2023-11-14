#include<iostream>
#include<vector>
using namespace std;

int find_max(int ara[], int n)
{
    int i, mx;

    mx = ara[0];

    for(i = 0; i < n; i++)
    {
        //cout<<"ara = "<<ara[i]<<endl;
    }

    //cout<<"size = "<<sizeof(ara)<<endl;

    for(i = 0; i < sizeof(ara)/4; i++)
    {
        if(ara[i] > mx)
        {
            mx = ara[i];
        }
    }

    return mx;
}

int main()
{
    vector<int> ara;
    int n;
    int ara2[]={1,2,3};
    cin>>n;

    int num;

    for(int i=0; i<n; i++)
    {
        cin>>num;
        ara = push_back(num);
    }


    int siz = sizeof(ara);
    int siz2 = sizeof(ara2);
    cout<<"size = "<<siz<<endl;
    cout<<"size2 = "<<siz2<<endl;
    cout<<find_max(ara, n)<<endl;

}
