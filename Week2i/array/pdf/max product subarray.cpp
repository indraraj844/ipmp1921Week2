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
