method 1:
brute force
#include<bits/stdc++.h>
using namespace std;

int max_product(int arr[],int n)
{
  int prod,maxprod=INT_MIN;
  for(int i=0;i<n;i++)
  {
      prod=1;
      for(int j=i;j<n;j++)
      {
          prod*=arr[j];
          maxprod=max(maxprod,prod);
      }
  }
  return maxprod;

}

int main()
{
    int arr[5]={10,-6,-3,0,60};
    int n=5;
    cout<<" maximum product is ="
    <<max_product(arr,n);
    return 0;
    
}
method 2:
based on lagrest sum of  continous subarray
#include<bits/stdc++.h>
using namespace std;

int max_product(int arr[],int n)
{
  int max_end=1//for positive product
  ,min_end=1//for negetive product
  ,maxprod=INT_MIN;
  int flag=1;
  for(int i=0;i<n;i++)
  {
      if(arr[i]>0)
      {
          max_end=max_end*arr[i];
          min_end=min(1,min_end*arr[i]);
          flag=0;
      }
      else if(!arr[i])
      {
          max_end=1;
          min_end=1;
      }
      else 
      {
          int temp=max_end;
          max_end=max(1,min_end*arr[i]);
          min_end =temp*arr[i];
      }
      maxprod=max(maxprod,max_end);
  }
  if(flag &&max_end==1)
  return 0;
  else
  return maxprod;

}

int main()
{
    int arr[7]={ -6, 4, -5, 8, -10, 0, 8 };
    int n=7;
    cout<<" maximum product is ="
    <<max_product(arr,n);
    return 0;
    
}
thankyou
