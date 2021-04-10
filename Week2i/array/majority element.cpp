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
#include<bits/stdc++.h>
using namespace std;

int find_candidate(int arr[],int n)
{
    int count=1;
    int maj_index=0;
    for(int i=1;i<n;i++)
    {
        if(arr[maj_index]==arr[i])
        count++;
        else
        {
            count--; 
        }
       
        if(!count)
        {
            maj_index=i;
            count=1;
        }
    }
    return maj_index;
}
bool isCheck(int arr[],int l,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[l])
        count++;
    }
    return ((n+1)/2)<=count;

}
int main()
{
    int arr[7]={2,3,2,2,3,2,8};
    int n=7;
    int l=find_candidate(arr,n);
    if(isCheck(arr,l,n))
    cout<<"majority element is "<<arr[l];
    else
    cout<<"no majority element";
    return 0;
}
method 3.
use hashmap
