
using namespace std;
#include<vector>
#include<algorithm>
class Solution
{
public:
    //int x,y,z;
    vector<vector<int>> threeSum(vector<int>& nums) {

        // int i=0;
        // int j=1;
        // int c=0;
    
       
        // set<vector<int>>s;

         sort(nums.begin(), nums.end());
         vector<vector<int>> res;
        int l=nums.size();
         int sum;
         for(int i=0;i<l;i++)
         {
             if(i!=0 && nums[i]==nums[i-1])
             {
                 continue;
             }
             int j=i+1;
             int k=l-1;
             while(j<k)
             {
                 sum=nums[i]+nums[j]+nums[k];
                 if(sum<0)
                 {
                     j++;
                 }
                 else if (sum>0)
                 {
                     k--;
                 }
                 else{
                     res.push_back({nums[i],nums[j],nums[k]});
                     j++;
                     k--;
                     while(j<k &&  nums[j]==nums[j-1])
                     {
                         j++;
                     }

                      while(j<k &&  nums[k]==nums[k+1])
                     {
                        k--;
                     }
                 }
             }
         }
     
        // while(j<nums.size())
        // {
        //     int k=j+1;
        //     for(int q=k;q<nums.size();q++)
        //         {
        //           int sum=nums[i]+nums[q]+nums[j];
        //           if(sum==0)
        //             {
        //                 vector<int>temp={nums[i],nums[q],nums[j]};
        //                  sort(temp.begin(), temp.end());
        //                 s.insert(temp);

                        
                    // res.push_back({nums[i],nums[q],nums[j]});
                    
                  
        //             }

        //         }

           
                
            
        //     i++;
        //     j++;




        // }
        //  set<set<int>> s;
        
        //     // Traverse the Vector
        //     for (int x : res)
        //      {
        
        //         // Insert each element
        //         // into the Set
        //         s.insert(x);
        //      }
    //  vector<vector<int>> res(s.begin(),s.end());
      return res;
    }
        
    
};