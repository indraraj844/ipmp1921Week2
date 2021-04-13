#include<bits/stdc++.h>
using namespace std;
#define d 256

char first_unique(string str)
{
    int len=str.length();
    int hash[256]={0};
    for(int i=0;i<d;i++)
        hash[i]=-1;

    for(int i=0;str[i];i++)
    {
        if(hash[str[i]]==-1)
      hash[str[i]]=i;
      else 
       hash[str[i]]=-2;

    } 
    int mn=INT_MAX;
     for(int i=0;i<d;i++)
     {
         if(hash[i]>0)
         mn=min(mn,hash[i]);

     }
     return str[mn];
    
}

int main()
{
    string str="stringstig";
     cout<<first_unique(str);
    return 0;
}