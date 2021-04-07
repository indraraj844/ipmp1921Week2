#include <bits/stdc++.h>

using namespace std;

void digit_freq(string str,int n)
{
    int count[10]={0};
    for(int i=0;i<n;i++)
    {
        int l=str[i]-'0';
        if(l>-1&&l<10)
            count[l]++;
    }
    for(int i=0;i<10;i++)
    cout<<count[i]<<" ";
}

int main()
{
    string str="a11472o5t6";
    digit_freq(str,str.length());

    return 0;
}
