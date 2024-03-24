#include <bits/stdc++.h> 
using namespace std;


// second approch 




// first approch cause TLE
class Solution {
public:
bool checkele(string s ,int start,int end)
{
    for(int i=start;i<end;i++)
    {
        if(s[i]==s[end])
        {
            return true;
        }
    }

    return false;


}
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=1;
        int maxint=0;
        if(s.length()==1)
        {
            return 1;
        }

        while(j<s.length())
        {
           
            if(checkele(s,i,j))
            {   
                maxint=max(maxint,j-i) ;
                j=i+1;
                i++;
                

            }
           else
           {
                maxint=max(maxint,j-i +1 ) ;
                j++;
           }
           
        }
        return maxint;

    }
};
