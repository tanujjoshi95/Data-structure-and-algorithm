#include<iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {

        int i=0;
        int j=0;
        int count=0;
        int res=-1;
        if(haystack.length()<needle.length())
                 {
                     return -1;
                 }
        while(i<haystack.length())
        {
            

          
            if(haystack[i]==needle[0])
            {
                 res=i;
                 j=0;
                while(j<needle.length())
                {

                    if(haystack[i]==needle[j])
                    { 
                        count++;
                      
                    }
                    else
                    {
                        break;
                    }
                    i++;
                    j++;
                   
                    
                }
                i=res;
              
               
                 
            }
             if(count==needle.length())
                 {
                     return res;
                 }
            
            i++;
            count=0;
        }

        return -1;
        
    }
};