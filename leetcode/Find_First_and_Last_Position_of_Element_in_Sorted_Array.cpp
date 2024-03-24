#include<iostream>
using namespace std;
#include <vector>;
class Solution {
public:
   
    int firstocc(vector<int>&nums,int t)
    {
        int i=0;
        int j=nums.size()-1;
      
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(nums[mid]<t){
                i=mid+1;
            }
            else if(nums[mid]>t)
            {
                j=mid-1;

            }

            else{
                if(mid==0 ||nums[mid]!=nums[mid-1])
                {
                    return mid;
                }
                else{
                    j=mid-1;
                }
            }
        }

        return -1;

    }

     int lastocc(vector<int>&nums,int t)
    {
        int i=0;

        int j=nums.size()-1; 
         int l=j;
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(nums[mid]<t){
                i=mid+1;
            }
            else if(nums[mid]>t)
            {
                j=mid-1;

            }

            else{
                if(mid==l ||nums[mid]!=nums[mid+1])
                {
                    return mid;
                }
                 else{
                     i=mid+1;
                    
                }
            }
            
        }

        return -1;

    }
    vector<int> searchRange(vector<int>& nums, int target)
     {

        return{firstocc(nums,target),lastocc(nums,target)};

      
    }
};