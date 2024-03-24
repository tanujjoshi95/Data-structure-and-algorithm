#include <iostream>
#include<vector>
using namespace std;


class Solution {
public:


    int pivot(vector<int>& nums) {
       
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<e)
        {
            if(nums[mid]>=nums[0])
            {
                s=mid+1;

            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        
        return s;

    }
    int bs(vector<int>& nums,int s,int e,int key)
    {
        int start = s;
        int end = e;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(nums[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > nums[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return -1;
    

    }

    int search(vector<int>& nums, int target) {
       int pvt= pivot(nums);
       int e=nums.size()-1;
        if(nums[pvt]<=target && nums[e]>=target)
         {
           return bs(nums,pvt,e,target);

         }
         else{
            return bs(nums,0,pvt-1,target);
         }

        return -1;

    }
};