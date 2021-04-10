method 1;
brute force
#include<bits/stdc++.h>
using namespace std;

int max_subarray(int arr[],int n)
{
    int sum;
    int max_length=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j])sum+=1;
            else sum+=-1;

            if(!sum)
            max_length=max(max_length,j-i+1);
        }
    }
    return max_length;

}

int main()
{
    int arr[7]={1,0,0,1,1,0,1};
    int n=7;
    cout<<" maximum length of equal zero and one ="
    <<max_subarray(arr,n);
    return 0;
    
}
method 2:
efficent
