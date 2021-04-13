M1-
  using list of string
  #include<bits/stdc++.h>
using namespace std;

void reverse_words(string str)
{
    vector<string>l;
    string s="";
    for(int i=0;str[i];i++)
    {
        if(str[i]==' ')
        {
            l.push_back(s);
            s="";

        }
        else 
        s+=str[i];
    }
    l.push_back(s);
    for(int i=l.size()-1;i>=0;i--)
    {
        cout<<l[i]<<" ";
    }
}

int main()
{
    string str="i love programing";
     reverse_words(str);
    return 0;
}
time : o(n) s(n);

M2
#include<bits/stdc++.h>
using namespace std;

string reverse_words(string str)
{
    string res="";
    string s="";
    for(int i=str.length()-1;i>-1;i--)
    {
        if(str[i]==' ')
        {
          reverse(s.begin(),s.end());
          res+=s;
          res+=' ';
            s="";

        }
        else 
        s+=str[i];
    }
    reverse(s.begin(),s.end());
          res+=s;
    return res;
}

int main()
{
    string str="i love programing";
     cout<<reverse_words(str);
    return 0;
}
without using stl
thankyou
