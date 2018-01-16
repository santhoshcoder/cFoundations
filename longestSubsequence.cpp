/* Program to find the longest word in D that is a subsequence of S */
#include <iostream>
using namespace std;
int main() 
{
  const int SIZE = 5;
  string d[SIZE] = {"able", "ale", "apple", "bale", "kangaroo"},s = "abppplee",maxword = "";
  for(int j=0;j<SIZE;j++)
  {
    string w = d[j];
    int count = 0;
    int index = 0;
    for(int i=0;i<s.length() && index <w.length();i++)
    {
        if(w[index] == s[i])
        {
          index++;
          count++;
        }
    }
    if(count == w.length() && maxword.length() < w.length())
    {
      maxword = w;  
    }
  }
  cout<<"Longest subsequence is: "<< maxword<<endl;
}