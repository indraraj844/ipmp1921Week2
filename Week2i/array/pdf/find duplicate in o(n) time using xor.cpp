#include<bits/stdc++.h>
using namespace std;
void find_duplicate(int arr[],int size,int n)
{
    int x=0,y=0,res=0;
    for(int i=0;i<size;i++)
        res^=arr[i];

    for(int i=1;i<n+1;i++)
    {
        res^=i;
    }
    int set_bit=(res)& ~(res-1);
    for(int i=0;i<size;i++)
    {
        if(set_bit&arr[i])
            x^=arr[i];
        else
            y^=arr[i];
    
    }
     for(int i=1;i<n+1;i++)
    {
        if(set_bit&i)
            x^=i;
        else
            y^=i;
    
    }
    cout<<" double elment are:"<<x<<" & "<<y;
}

int main()
{
    int arr[7] = {4, 2, 4, 5, 2, 3, 1};
     int n = 5,size=7;
    find_duplicate(arr,size,n);
    return 0;
}