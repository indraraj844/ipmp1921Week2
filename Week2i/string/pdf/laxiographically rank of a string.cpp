 M1
 using factorial method
 time: o(n^2)
   #include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int res=1;
    for(int i=1;i<n+1;i++)
    {
        res*=i;
    }
    return res;
}
int count(string str,int i)
{
    int count=0;
    for(int j=i+1;j<str.length();j++)
    {
        if(str[j]<str[i])
        count++;
    }
    return count;
}

int find_rank(string str)
{
    int len=str.length();
    int mul=fact(len);
    int rank=1;
    for(int i=0;str[i];i++)
    {
        mul/=(len-i);
        rank+=count(str,i)*mul;
    }
    return rank;
}

int main()
{
    string str="string";
     cout<<find_rank(str);
    return 0;
}
M-2
  efficent
  time:
 
