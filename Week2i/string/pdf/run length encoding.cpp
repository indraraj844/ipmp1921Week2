M-1
  using a simple loop standered method
  #include<bits/stdc++.h>
 using namespace std;

void runlength_encoding(string str)
{
    for(int i=0;str[i];i++)
    {
        int count=1;
        int temp=i;
        while(str[i+1]&&str[i]==str[i+1])
        {
            i++;
            count++;
        }
        cout<<str[temp]<<count;
    }
}

int main()
{
    string str="wwwwaaadexxxxxxywww";
     runlength_encoding(str);
    return 0;
}
time complexity o(n)
  s(1)
  
