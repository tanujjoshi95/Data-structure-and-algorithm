#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    bool isValid(string s) {
      
      stack<char> st;
      bool check = true;
      for(int i=0;i<s.length();i++)
      {
          if(s[i]=='(' || s[i]=='[' || s[i]=='{')
          {
              st.push(s[i]);
          }

          else if (s[i]==')')
          {
              if(!st.empty() && st.top()=='(')
              {
                  st.pop();
              }
               else
          {
              check=false;
              break;

          }
              
          }
           else if (s[i]==']')
          {
              if(!st.empty() && st.top()=='[')
              {
                  st.pop();
              }
               else
          {
              check=false;
              break;

          }
              
          }
           else if (s[i]=='}')
          {
              if(!st.empty() && st.top()=='{')
              {
                  st.pop();
              }
               else
          {
              check=false;
              break;

          }    
        }  
      }
       if(!st.empty())
          {
              return false;
          } 
          return check;
    }
};