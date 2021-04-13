#include <bits/stdc++.h>
using namespace std;
 
 //based on lis problem
 int max_bitonic(int arr[],int n)
 {
     int lis[n],lds[n];
     lis[0]=1;
     for(int i=1;i<n;i++)
     {
         lis[i]=1;
         for(int j=0;j<i;j++)
         {
             if(arr[i]>arr[j]&&lis[i]<lis[j]+1)
              lis[i]=lis[j]+1;
         }
     }
      lds[n-1]=1;
     for(int i=n-2;i>=0;i--)
     {
         lds[i]=1;
         for(int j=n-1;j>i;j--)
         {
             if(arr[i]>arr[j]&&lds[i]<lds[j]+1)
              lds[i]=lds[j]+1;
         }
     }
     int mx=lis[0]+lds[0]-1;
     for(int i=0;i<n;i++)
      mx=max(mx,lis[i]+lds[i]-1);

    return mx;
 }

int main()
{
	int arr[7]  = {6, 5, 3, 2, 8, 10, 9};
    int n=7;
    cout<<max_bitonic(arr,n);
    return 0;
}
