#include <iostream>
using namespace std;
int main() 
{
  const int SIZE = 5;
  string d[SIZE] = {"able", "ale", "apple", "bale", "kangaroo"},s = "abppplee",maxword;
  int index,maxsubseq =0;
  bool found = false;
  //processing each string in D
  for(int i=0;i<SIZE;i++)
  {
    index = 0;
    //Check if the string in d is a subsequence of s
    for(int j=0;j<d[i].length();j++)
    {
         for(int k=index;k<s.length();k++)
         {
             if(d[i][j] == s[k])
              {
                 found = true;
                 index++;
                 break;
              }
         }
         if(!found)
         {
           break;
         }
         if(j != d[i].length() -1)
          found = false;
    }
    /*
    if(found)
    {
      cout<<"One of the subsequence is: "<< d[i]<<endl;
    }
    */
    if(found && maxsubseq <d[i].length())
      {
        maxsubseq = d[i].length();
        maxword   = d[i];
        found = false;
      }
  }
  cout<<"LongestSubsequence is: "<<maxword<<endl;
}