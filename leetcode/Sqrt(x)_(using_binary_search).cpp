#include <iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int e=x;
        long long int prev=-1;
        long long int mid=s+(e-s)/2;
        
        while(s<=e)
        {
          long long int  sq=mid*mid;
        if(sq==x)
        {
            return mid;
        }
        if (sq<x)
        {
            prev =mid;
            s=mid+1;

        }
        else{
            
            e=mid-1;
        }
        mid=s+(e-s)/2;
        

        }
        return prev;
    }
};