method 1:
adding range of array element 
#include<bits/stdc++.h>
using namespace std;

void find_majority(int arr[],int n)
{   int k=10000;
    for(int i=0;i<n;i++)
    {
        arr[arr[i]%k]+=k;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>(((n+1)/2)*k))
        {
            cout<<arr[i]%k<<" is majority element"<<endl;
            return;
        }
    }
       cout<<" no majority element";
}

int main()
{
    int arr[7]={2,3,2,3,2,2,1};
    int n=7;
    find_majority(arr,n);
}

method 2:
find candidate method
