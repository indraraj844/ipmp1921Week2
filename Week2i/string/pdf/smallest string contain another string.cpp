#include<bits/stdc++.h>
using namespace std;
#define d 256
string smallest_string(string txt,string ptn)
{
    map<char,int>hash_ptn;
    map<char,int>hash_txt;
    int m=ptn.length();
    int n=txt.length();

    //store ptn string into the hash map
    for(int i=0;i<m;i++)
     hash_ptn[ptn[i]]++;

int start=0,start_ind=-1,min_length=INT_MAX;
int count=0;
 for(int j=0;j<n;j++)
 {
     hash_txt[txt[j]]++;
     if(hash_txt[txt[j]]<=hash_ptn[txt[j]])
        count++;


     if(count==m)
     {
         //try to minimise the string
         while(hash_txt[txt[start]]>hash_ptn[txt[start]]
         ||hash_ptn[txt[start]]==0)
         {
             if(hash_txt[txt[start]]>hash_ptn[txt[start]])
             hash_txt[txt[start]]--;

             start++;
         }
       
        int len=j-start+1;
      if(len<min_length)
      {
          min_length=len;
          start_ind=start;
      }
        
     }
    
  }
  if(start_ind==-1)
   return "-1";
   else
   {
   return txt.substr(start_ind,min_length);

       
   }
   
}

int main()
{
    string txt="this is a test string";
    string ptn="tist";
     cout<<smallest_string(txt,ptn);
    return 0;
}