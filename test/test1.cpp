#include<bits/stdc++.h>
using namespace std;

 void compare(vector<int>& arr1, vector<int>& arr2, int k,vector<int> nums)
    {
      
        if(arr1.back()>arr2.back())
        {
            arr1.push_back(nums[k]);
           
}
        else
        {
            arr2.push_back(nums[k]);
            
}
}
    
    vector<int> resultArray(vector<int>& nums) {
      
        
        vector<int>arr1;
        vector<int>arr2;
        

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        
        for(int k=2;k<nums.size();k++)
        {
            compare(arr1,arr2,k,nums);
}
        for(int i=0;i<arr2.size();i++)
        {
            arr1.push_back(arr2[i]);
}
        return arr1;
    }

int main()
{
    vector<int>nums={5,4,3,8};
    vector<int>res = resultArray(nums);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
 return 0;
}
