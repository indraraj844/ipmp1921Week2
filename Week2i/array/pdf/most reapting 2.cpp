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

int main()
{
    int arr[7]={1, 5, 2, 1, 3, 2, 1};
    int n=7;
    int l=find_candidate(arr,n);
    cout<<"majority element is "<<arr[l];
    return 0;
}