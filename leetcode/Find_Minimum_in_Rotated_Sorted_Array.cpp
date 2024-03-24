#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int s=0;
        int e=nums.size()-1;
        
        int ans=INT_MAX;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            // if(nums[mid]>nums[s] && nums[mid]<nums[e])
            // {
            //     return nums[s];
            // }
            if(nums[mid]>=nums[s])
            {
                ans=min(ans,nums[s]);
                s=mid+1;
            }
            else
            {
               
                e=mid-1;
                ans=min(nums[mid],ans);

            }
        
        }
        return ans;

    }
};