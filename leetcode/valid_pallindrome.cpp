#include<iostream>
using namespace std;
#include <vector>;


class Solution {
public:
    bool isPalindrome(string s) {

        vector <char> res;
      
        for(int i=0;i<s.length();i++)
        {
             if ( isalnum(s[i]) ) 
        {
            char c=tolower(s[i]);
            res.push_back(c);
        }

        }
        if(res.size()==1 || res.size()==0)
        {
            return true;
        }
       

       

        //string res=ans.tolower();
        int i=0;
        int j=res.size()-1;

        
        while(i<j)
        {
            if(res[i]!=res[j]){
                return false;
            }
            i++;
            j--;
        }
            return true;
        
    }
};