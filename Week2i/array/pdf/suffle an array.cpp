#include <bits/stdc++.h>
using namespace std;

void suffle(int arr[],int n)
{
    srand(time(NULL));
    for(int i=n-1;i>=0;i--)
    {
        int j=rand()%(i+1);
        swap(arr[i],arr[j]);
    }
}
void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}


int main()
{
	int arr[6] = { 2, 3, 4, 6, 7, 5 };
	int size = 6;
    suffle(arr, size);
    print_array(arr,size);
}
