method 1:
we will use two array called inc,dec o(n) s(n)
  #include<bits/stdc++.h>
using namespace std;

int max_bitonic(int arr[],int n)
{
    int inc[n],dec[n];
    inc[0]=1;
    dec[n-1]=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=arr[i-1])
        inc[i]=1+inc[i-1];
        else
        inc[i]=1;
    }
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>=arr[i+1])
        dec[i]=1+dec[i+1];
        else
        dec[i]=1;
    }
    int maxlength=0;

    for(int i=0;i<n;i++)
    {
     if(maxlength<(inc[i]+dec[i]-1))
     maxlength=(inc[i]+dec[i]-1);
    }
    return maxlength;

}

int main()
{
    int arr[7]={12,4,78,90,45,23,30};
    int n=7;
    cout<<" maximum length of bitonic array ="
    <<max_bitonic(arr,n);
    return 0;
    
}
method 2:
using  two variable variable+one fact
start and next start
#include<bits/stdc++.h>
using namespace std;

int max_bitonic(int arr[],int n)
{
    int start=0,nextstart=0,maxlength=0,j=0;
    while(j<n-1)
    {
        while(j<n-1 && arr[j]<=arr[j+1])
            j++;
        while(j<n-1 && arr[j]>arr[j+1])
        {
            nextstart=j+1;
            j++;
        }
        maxlength =max(maxlength,j-(start-1));
        start=nextstart;
    }
    return maxlength;

}

int main()
{
    int arr[7]={12,4,78,90,45,23,30};
    int n=7;
    cout<<" maximum length of bitonic array ="
    <<max_bitonic(arr,n);
    return 0;
    
}
