#include<iostream>
using namespace std;
#include <vector>;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0;
        int l=nums.size();
      //  vector<int>res;
        while(i<l)
        {
            if(nums[i]!=0)
            {
                // res.push_back(nums[i]);
                nums[j]=nums[i];
                j++;
            }
            i++;

        }

        while(j<l)
        {
            nums[j]=0;
            j++;
        }

        
        
    
    }
};