#include<bits/stdc++.h>
using namespace std;

void find_majority(int arr[],int n)
{   int k=10000;
    for(int i=0;i<n;i++)
    {
        arr[arr[i]%k]+=k;
    }
    int max_index=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[max_index])
       max_index=i;
    }
    cout<<arr[max_index]%k<<" is max  reapeted element";
}

int main()
{
    int arr[7]={2,3,2,1,2,2,8,};
    int n=7;
    find_majority(arr,n);
}