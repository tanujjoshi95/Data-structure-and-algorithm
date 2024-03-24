#include<iostream>
using namespace std;
#include <vector>;


// Optimal solutionmo
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =0;
        // int ele= nums[0];
        for(auto ele : nums)
        {
            if(i==0 || i==1 || nums[i-2] != ele)
            {
                nums[i] = ele;
                i++;
            }
        }
    return i ;
    }
};

// my solution
class Solution {
public:

   
    int countfun(vector<int>& nums,int i)
    {
         int count=0;
        for(int j=i;j<nums.size();j++)
        {
            if(nums[i]==nums[j])
            {
                count++;
            }

        }
        return count;
    }
    int removeDuplicates(vector<int>& nums) {
       // int j=0;
        vector<int>expop;
        for(int  i=0;i<nums.size();i++)
        {
            int c = countfun(nums,i);
            if(c<=2)
            {
                expop.push_back(nums[i]);
            }

        }
        int k = expop.size();
        for (int i = 0; i < k; i++)
         {
              nums[i] = expop[i];
               }

     return k;
        
    }
};